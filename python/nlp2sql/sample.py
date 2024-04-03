import os
import streamlit as st
from langchain.chains import create_sql_query_chain
from langchain_core.messages import HumanMessage
from langchain_google_genai import ChatGoogleGenerativeAI
from langchain_community.utilities.sql_database import SQLDatabase
from langchain_community.tools.sql_database.tool import QuerySQLDataBaseTool

# Set Google API Key
os.environ["GOOGLE_API_KEY"] = "AIzaSyAC4n1X_WlPTdll4vvKDH7ptQT9IKqNRWs"

db_user = "sql6695394"
db_password = "qEpFSWiEsE"
db_host = "sql6.freesqldatabase.com"
db_name = "sql6695394"
db_port = "3306"
# from langchain_community.utilities.sql_database import SQLDatabase
db = SQLDatabase.from_uri(f"mysql+pymysql://{db_user}:{db_password}@{db_host}/{db_name}",sample_rows_in_table_info=1,include_tables=['products','orders'],custom_table_info={'products':"products",'orders':"orders"})
db = SQLDatabase.from_uri(f"mysql+pymysql://{db_user}:{db_password}@{db_host}/{db_name}")

# Initialize Google Generative AI model
llm = ChatGoogleGenerativeAI(model="gemini-pro", temperature=0.7, top_p=0.85, convert_system_message_to_human=True)

# Function to generate SQL query (with caching)
@st.cache(show_spinner=False)
def generate_sql_query(prompt):
    generate_query = create_sql_query_chain(llm, db)
    query = generate_query.invoke({"question": prompt})
    return query[7:-3]

# Function to execute SQL query (with caching)
@st.cache(show_spinner=False)
def execute_sql_query(sql_query):
    execute_query = QuerySQLDataBaseTool(db=db)
    res = execute_query.invoke(sql_query)
    return res

# Streamlit app
def main():
    st.title("Chat with Assistant")

    # Initialize chat history
    if "messages" not in st.session_state:
        st.session_state.messages = []

    # Display chat messages from history on app rerun
    for message in st.session_state.messages:
        with st.chat_message(message["role"]):
            st.markdown(message["content"])

    # Accept user input
    if prompt := st.text_input("You:", "Type here..."):
        # Add user message to chat history
        with st.spinner("Generating response..."):
            with st.chat_message("user"):
                st.markdown(prompt)

            # Generate SQL query
            sql_query = generate_sql_query(prompt)

            # Execute SQL query
            response = execute_sql_query(sql_query)

            # Display assistant response in chat message container
            with st.chat_message("assistant"):
                st.markdown(response)

            # Add assistant message to chat history
            st.session_state.messages.append({"role": "assistant", "content": response})


if __name__ == "__main__":
    main()
