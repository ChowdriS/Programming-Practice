# #hello world
# print("Hello World")

# #area triangle
# base=int(input("Enter the base value:"))
# height=int(input("Enter the height value:"))
# print((0.5*base*height))

# #compare two list
# list1=list(map(int,input().split()))
# list2=list(map(int,input().split()))
# if(list1.sort()==list2.sort()):
#     print("Two list are equal")
# else:
#     print("Two list are not equal")

# #string to uppercase
# str=input()
# print(str.upper())
    
# #linear search
# def check(a,b):
#     for i in a:
#         if(i==b):
#             return 1
#     return 0
# l=list(map(int,input().split()))
# key=int(input("Enter Search key:"))
# if(check(l,key)==1):
#     print("True")
# else:
#     print("False")

# #swap 2 var
# a=int(input())
# b=int(input())
# a,b=b,a
# print(a," ",b)

# #random number
# import random
# print(random.randint(0,100))

# #add two number
# a,b=map(int,input().split())
# print(a+b)

# #max of num
# a,b=map(int,input().split())
# print(max(a,b))

# #fact of num
# def fact(n):
#     if(n==0):
#         return 1
#     else:
#         return n*fact(n-1)
# a=int(input())
# print(fact(a))

# #si
# p,n,r=map(float,input().split())
# print(p*n*r/100)

# #comp int
# p,n,r=map(float,input().split())
# print(p*pow((1+r/100),n))

