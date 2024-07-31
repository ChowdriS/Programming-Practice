import mysql.connector
from mysql.connector import Error

def create_connection(host_name, user_name, user_password, db_name):
    connection = None
    try:
        connection = mysql.connector.connect(
            host=host_name,
            user=user_name,
            password=user_password,
            database=db_name
        )
        print("Connection to MySQL DB successful")
    except Error as e:
        print(f"The error '{e}' occurred")
    return connection

def execute_query(connection, query):
    if connection is None:
        print("No connection to the database. Query not executed.")
        return

    cursor = connection.cursor()
    try:
        cursor.execute(query)
        connection.commit()
        print("Query executed successfully")
    except Error as e:
        print(f"The error '{e}' occurred")

def fetch_query(connection, query):
    if connection is None:
        print("No connection to the database. Query not executed.")
        return None

    cursor = connection.cursor()
    result = None
    try:
        cursor.execute(query)
        result = cursor.fetchall()
        return result
    except Error as e:
        print(f"The error '{e}' occurred")
        return None


connection = create_connection("localhost", "root", "chow3sql", "sample")

create_table_query = """
CREATE TABLE IF NOT EXISTS users (
  id INT AUTO_INCREMENT, 
  name TEXT NOT NULL, 
  age INT, 
  gender TEXT, 
  nationality TEXT, 
  PRIMARY KEY (id)
)
"""
execute_query(connection, create_table_query)


insert_user_query = """
INSERT INTO users (name, age, gender, nationality)
VALUES
('James', 25, 'male', 'USA'),
('Leila', 32, 'female', 'France'),
('Brigitte', 35, 'female', 'UK'),
('Mike', 40, 'male', 'Denmark'),
('Elizabeth', 21, 'female', 'Canada')
"""
execute_query(connection, insert_user_query)


select_users_query = "SELECT * FROM users"
users = fetch_query(connection, select_users_query)

if users:
    for user in users:
        print(user)