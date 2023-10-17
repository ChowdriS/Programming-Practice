# list=int(input("Enter"))
# sum=0
# while list:
#    sum+=(list%10)
#    list=(list//10)
# print(sum)
# a=4
# list.insert(2,-1)
# print(list)
# print(id(3))
# print(type(3.3))
# print(type('3'))
# print(type("3"))
# a=2
# if a==1:
#     print("hello world")
# elif a==2:
#     print("elif-1")
# elif a==3:
#     print("elif-3")
# else:
#     print("else")
# i=2
# while i:
#     if(i>10):
#         break
#     else:
#         print(i,end="")
#         i+=1
# str = "dev"
# for i in range(0,len(str)):
#     print(str[i],end="")

# id=int(input("Enter Your Id:"))
# name=(input("Enter Your Name:"))

# salary=int(input("Enter Your Salary:"))
# allowance=int(input("Enter Your Allowance:"))
# gross=salary+allowance
# print("The net pay=",int(((20*salary)/100)))
# if(salary<=5000):
#     print("The gross Salary=",gross)
#     print("The net pay=",gross-int(((0*salary)/100)))
# elif(salary>5000 and salary<=10000):
#     print("The gross Salary=",gross)
#     print("The net pay=",gross-int(((10*salary)/100)))
# elif(salary>10000 and salary<=20000):
#     print("The gross Salary=",gross)
#     print("The net pay=",gross-int(((20*salary)/100)))
# else:
#     print("The gross Salary=",gross)
#     print("The net pay=",int(gross-((30*salary)/100)))
    
# sum=0
# for i in range(50,80,2):
#     sum+=i
# print(sum)
# def add(i):
#     sum=0
#     while(i<=80):
#         sum+=i  
#         i+=2
#     return sum      
# total=add(1)+add(50)
# print(total)

# def add(a,b):
#     if(b==1):
#         return a
#     else:
#         return(a*add(a,b-1))
# a=int((input("Enter The number:")))
# b=int((input("Enter The number:")))
# print(add(a,b))
# count=0
# str=input("enter the string:")
# for i in str:
#     if(i.isupper()):
#         count+=1
#         print(i,end="")
# print("\n%d"%count)
# count=0
# str=input("Enter")
# for i in str:
#     if(i in "aeiou" or i in "AEIOU"):
#         count+=1
# print(count)

# list=[2.2,4,"sa2"]
# print(list)
# list1=[2.3,5]
# list.append(list1)
# print(list)
# # list.clear()  removes the elements from the list
# # print(list)
# list2=list1.copy()
# print(list2)
# print((2**3)**2)
# print(int(43.55+2/2))
# print(not(1&1))
# i="a"
# a="csda"
# for i in range(len(a)):
#     a="s"
#     print(a)
# s1={3, 4}
# s2={1, 2}
# s3=set()
# i=0
# j=0
# for i in s1:
#     for j in s2:
#         s3.add((i,j))
#         i+=1
#         j+=1
# print(s3)
# print("sfd".find("fd"))
# print("{:,}".format(23431425)
# 
# a="wedsdqe"
# print(a.replace('w','e'))
# a=[1,2,3,4,5]
# l1=a
# l1[1]=3
# print(a)
# b=a[:]
# b[1]=4
# print(b)
# t=()
# t=list(t)
# # t=t+(3,)
# # t=t+(3,)
# t.append(1)
# t.append(1)
# t=tuple(t)
# print(t)
# a,b=divmod(11.5,2.93)
# print(a,b)
# a=[2,3]
# a2=(2,3)
# print(a2*3+(2,4))
# c=zip(a,a2)
# print(tuple(c))
# a={'hi',"a",1,12.2,True,False,0,"Kec"}
# print(a)
# if 1:
#     print('ds')
# a={'Banana','2','4','23','9'}
# b={'Banana','23','9'}
# print(a&b)
# print(a|b)
# print(a^b)
# print(a-b)
# print(b.issubset(a))
# print(a.issuperset(b))
# c={}
# c=a.copy()
# print(c)

# py={"john","jack","jill","joe"}
# ja={"jake","john","eric","jill"}
# print(len(py))
# print(ja)
# print(py-ja)
# print(py|ja)
# print(py^ja)
# print(py&ja)
# print(py^ja)
# a=dict()
# n=int(input())
# for i in range(n):
#     print("Key:",end="")
#     x=input()
#     a[x]=float(input())
# # for i in dict.items:
# print(a)
# print(not(3>4))
# print(not(1&1))
# # not(1&1)

# x = 50
# def func(x):
#     print('x is', x)
#     x = 2
#     print('Changed local x to', x)
# func(x)
# print('x is now', x)
# print("3\2\x")
# a={}
# v={3}
# print(type(a))
# print(type(v))
# print(type({3,2}))

# a=open("sample.txt","w")

# a.write("Hello\neveryone\nnewline")

# a.close()

# b=open("sample.txt","r+")

# s=b.read()
# words,tab,nl=1,0,1
# for i in s:
#     if (i=='\n'):
#         nl+=1
#         words+=1
#     elif(i=='\t'):
#         tab+=1
#         words+=1
#     elif(i==' '):
#         words+=1

# print("No of words",words)
# print("No of tabs",tab)
# print("No of lines",nl)

''' s=1
# x= lambda a: (for i in range(1,n+1):  s*=i)
fact = lambda a : 1 if(a==1) else a*fact(a-1)
# x = lambda a : [s*=i for i in range(1,n+1)]
number=int(input("=>"))
print(fact(number))   '''

# import pickle
# a=open("sample.txt","w" )
# pickle.dump(str(1.82),a)
# a.close()
# a=open("sample.txt","r+")
# c=pickle.load(a)
# print(type(c))


# a=open("sample.txt","r+")
# x=a.read()
# for i in a:
#     print(type(i))



# import pickle
# f = open("sample.txt","wb")
# dct = {"name":"Ravi", "age":23, "Gender":"M","marks":75}
# pickle.dump(dct,f)
# pickle.dump(23.2,f)
# pickle.dump(23,f)
# f.close

# f = open("sample.txt","rb")
# for _ in range(2):
#     print(type(pickle.load(f)))
# f.close()


# a=9.3
# b=int(a)
# print(b) 
# if(a!=b):
#     print("float")
# else:
#     print("int")
# class Customer:
#     id="21CSR0"
#     number=1
#     incre=1
#     def setcustomerid(self,customerid):
#         self.customerid=customerid
#     def settelephoneno(self,teleno):
#         self.telephoneno=teleno
#     # def getcustomerid(self):
#     #     return self.customerid
#     # def gettelephoneno(self):
#     #     return self.telephoneno
#     def valid(self):
#         if(len(self.customerid)>3 and len(self.customerid)<21):
#             print("Valid Name")
#         else:
#             print("invalid name")
#     def print(self):
#         print("------------")
#         print("Customer",Customer.incre)
#         print(Customer.id + str(Customer.incre))
#         Customer.incre+=1
#         print("Name=",self.customerid)
#         print("Telephone",self.telephoneno)
#     def __init__(self,name,tele):
#         self.setcustomerid(name)
#         self.settelephoneno(tele)
#         self.valid()
# lst=[]
# n=int(input("Number of entries:"))
# # print("21csr"+str(22))
# for i in range(n):
#     name=input("Enter Name:")
#     tele=int(input("Enter Telephone:"))
#     lst.append(Customer(name,tele))
# print("Printing the details=>")
# for obj in lst:
#     obj.print()
    



# import pandas as pd
# import numpy as np
# import string
# # import nltk
# import nltk
# nltk.download('stopwords')
# nltk.download('punkt')
# from nltk.corpus import stopwords
# from sklearn.feature_extraction.text import TfidfVectorizer
# from sklearn.naive_bayes import MultinomialNB
# from sklearn.model_selection import train_test_split

# # Load the dataset
# df = pd.read_csv('E:\sms-spam-classifier\spam.csv', encoding='ISO-8859-1')

# # Drop unwanted columns and rename the remaining columns
# df = df.drop(["Unnamed: 2", "Unnamed: 3", "Unnamed: 4"], axis=1)
# df = df.rename(columns={"v1": "label", "v2": "text"})

# # Preprocess the text data
# stop_words = set(stopwords.words('english'))
# df['text'] = df['text'].apply(lambda x: ' '.join(word.lower() for word in x.split() if word.lower() not in stop_words))
# df['text'] = df['text'].apply(lambda x: x.translate(str.maketrans('', '', string.punctuation)))

# # Split the data into training and testing sets
# X_train, X_test, y_train, y_test = train_test_split(df['text'], df['label'], test_size=0.2, random_state=42)

# # Convert the text data into TF-IDF vectors
# vectorizer = TfidfVectorizer()
# X_train_vectors = vectorizer.fit_transform(X_train)
# X_test_vectors = vectorizer.transform(X_test)

# # Train the Naive Bayes classifier
# clf = MultinomialNB()
# clf.fit(X_train_vectors, y_train)

# # Test the classifier
# predictions = clf.predict(X_test_vectors)

# # Evaluate the performance of the classifier
# accuracy = np.mean(predictions == y_test)
# print("Accuracy:", accuracy)





# import string
# from nltk.corpus import stopwords
# from nltk.tokenize import word_tokenize
# from sklearn.feature_extraction.text import TfidfVectorizer
# from sklearn.naive_bayes import MultinomialNB

# # Load the spam and ham messages
# spam_messages = ["free money", "get rich quick", "you have won a prize", "buy now and get 50% off"]
# ham_messages = ["I will be there at 3pm", "Can you please call me back?", "Don't forget to buy milk"]

# # Tokenize the messages
# spam_words = []
# for message in spam_messages:
#     words = word_tokenize(message)
#     for word in words:
#         spam_words.append(word.lower())

# ham_words = []
# for message in ham_messages:
#     words = word_tokenize(message)
#     for word in words:
#         ham_words.append(word.lower())

# # Remove stopwords and punctuation
# stop_words = set(stopwords.words('english'))
# spam_words = [word for word in spam_words if word not in stop_words and word not in string.punctuation]
# ham_words = [word for word in ham_words if word not in stop_words and word not in string.punctuation]

# # Create the TF-IDF vectorizer
# vectorizer = TfidfVectorizer()
# X = vectorizer.fit_transform(spam_words + ham_words).toarray()

# # Create the labels
# y = [0] * len(spam_words) + [1] * len(ham_words)

# # Train the Naive Bayes classifier
# clf = MultinomialNB()
# clf.fit(X, y)

# Test the classifier
# test_message = input()
# test_words = word_tokenize(test_message.lower())
# test_words = [word for word in test_words if word not in stop_words and word not in string.punctuation]
# test_vector = vectorizer.transform(test_words).toarray()
# prediction = clf.predict(test_vector)
# if prediction[0] == 0:
#     print("This is a spam message.")
# else:
#     print("This is a legitimate message.")



# import pandas as pd
# import string
# import nltk
# from nltk.corpus import stopwords
# from sklearn.feature_extraction.text import TfidfVectorizer
# from sklearn.naive_bayes import MultinomialNB
# from sklearn.metrics import accuracy_score
# from sklearn.model_selection import train_test_split

# # Load the dataset
# df = pd.read_csv('E:\sms-spam-classifier\spam.csv', encoding='ISO-8859-1')

# # Drop unwanted columns and rename the remaining columns
# df = df.drop(["Unnamed: 2", "Unnamed: 3", "Unnamed: 4"], axis=1)
# df = df.rename(columns={"v1": "label", "v2": "text"})

# # Preprocess the text data
# stop_words = set(stopwords.words('english'))
# df['text'] = df['text'].apply(lambda x: ' '.join(word.lower() for word in x.split() if word.lower() not in stop_words))
# df['text'] = df['text'].apply(lambda x: x.translate(str.maketrans('', '', string.punctuation)))

# # Convert the text data into TF-IDF vectors
# vectorizer = TfidfVectorizer()
# X_vectors = vectorizer.fit_transform(df['text'])

# # Split the data into training and testing sets
# X_train, X_test, y_train, y_test = train_test_split(X_vectors, df['label'], test_size=0.2, random_state=42)

# # Train the Naive Bayes classifier
# clf = MultinomialNB()
# clf.fit(X_train, y_train)

# # Test the classifier on the testing set
# predictions = clf.predict(X_test)

# # Calculate accuracy
# accuracy = accuracy_score(y_test, predictions)
# print("Accuracy:", accuracy)

# # Take user input
# user_input = input("Enter a message: ")
# user_input = [user_input]
# user_input_vectors = vectorizer.transform(user_input)

# # Test the classifier on user input
# prediction = clf.predict(user_input_vectors)

# # Print the prediction
# if prediction[0] == 'spam':
#     print("This is a spam message.")
# else:
#     print("This is a legitimate message.")

# a=open("sample.txt","r,a")
# def a():
#     try:
#         print("0")
#         return 1
#     finally:
#         return 9
# b=a()
# print(b)
# a=[9,0]
# try:
#     print(a[2])
# expect:
# print(int('3.3'))


# class A:
#     def __init__(self,a) :
#         self.a=a
#     def __sub__(self,other):
#         return self.a-other.a
#     def __truediv__(self,other):
#         return  self.a/other.a
# b=A(6)
# c=A(3)
# d=A(2)
# # tot=b-d
# print(b/c)

# class A:
#     def __init__(self,a):
#         self.a=a
#     def display(self):
#         print(self.a)
# class B(A):
#     pass
# class C(B):
#     pass
# a=C(9)
# print(a.display())

# import mysql.connector

# mydb= mysql.connector.connect(
#     host = "localhost",
#     user = "root",
#     password = "Chow3"
# )

# cursor=mydb.cursor()

# cursor.execute("Create Database Python")


import pandas as pd

df = pd.read_csv('spam.csv')

print(df.head(5))

df.drop(columns=['Unnamed: 2','Unnamed: 3','Unnamed: 4'],inplace=True)
