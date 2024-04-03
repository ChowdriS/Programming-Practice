import os
from langchain.chains import create_sql_query_chain
# from langchain_openai import ChatOpenAI
# from langchain_google_vertexai import VertexAI
from langchain_core.messages import HumanMessage
from langchain_google_genai import ChatGoogleGenerativeAI
# from langchain.chains import Chain
from operator import itemgetter

 from langchain_core.output_parsers import StrOutputParser
 from langchain_core.prompts import PromptTemplate
 from langchain_core.runnables import RunnablePassthrough


os.environ["GOOGLE_API_KEY"] = "AIzaSyB8W526Lj7M8FVoruMol92zNJ0kUPgPtIA"

db_user = "sql6695394"
db_password = "qEpFSWiEsE"
db_host = "sql6.freesqldatabase.com"
db_name = "sql6695394"
db_port = "3306"
from langchain_community.utilities.sql_database import SQLDatabase
db = SQLDatabase.from_uri(f"mysql+pymysql://{db_user}:{db_password}@{db_host}/{db_name}",sample_rows_in_table_info=1,include_tables=['products','orders'],custom_table_info={'products':"products",'orders':"orders"})
db = SQLDatabase.from_uri(f"mysql+pymysql://{db_user}:{db_password}@{db_host}/{db_name}")
print(db.dialect)
print(db.get_usable_table_names())
print(db.table_info)

llm = ChatGoogleGenerativeAI(model="gemini-pro",temperature=0.7, top_p=0.85,convert_system_message_to_human=True)
# llm = ChatOpenAI(model="gpt-3.5-turbo", temperature=0)
generate_query = create_sql_query_chain(llm, db)
query = generate_query.invoke({"question": "list the prise of all products?"})
# print(query)
sql_query = query[7:-3]

print(sql_query)

from langchain_community.tools.sql_database.tool import QuerySQLDataBaseTool
execute_query = QuerySQLDataBaseTool(db=db)
res = execute_query.invoke(sql_query)

 
answer_prompt = PromptTemplate.from_template(
     """You are an expert in converting English questions to SQL query!
    The SQL database has the more tables and columns.when the question is asked give the answer in terms of query like if the question is "count the product" then the query will be
    "select count(*) from products"
    also the sql code should not have ``` in beginning or end and sql word in output

 Question: {question}
 SQL Query: {query}
 SQL Result: {result}
 Answer: """
 )

rephrase_answer = answer_prompt | llm | StrOutputParser()

chain = (
     RunnablePassthrough.assign(query=generate_query).assign(
         result=itemgetter("query") | execute_query
     )
     | rephrase_answer
 )

res = chain.invoke({"question": "list the products?"})


examples = [
     {
         "input": "List all the product names",
         "query": "SELECT name FROM products"
     },
     {
         "input": "Get the highest price from the product",
         "query": "SELECT MAX(MSRP) FROM products;"
     },
 ]
