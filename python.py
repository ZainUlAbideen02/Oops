

#Print your name, age, and favorite number.
# name = input("Enter Your Name : ")
# print("My Name is :",name)

# age = int(input("Enter Your Age : "))
# print("My Age is :",age)

# num = input("Enter Your Favourite Number : ")
# print("My Favourite Number is :",num)



#Take two numbers from the user and print their sum, difference, and product.
# num1 = int(input("Enter First Number : "))
# num2 = int(input("Enter Second Number : "))

# print("The sum of two numbers is :",num1+num2)
# print("The differnce of two numbers is :",num1-num2)
# print("The product of two numbers is :",num1*num2)



# #Take input of radius and calculate the area of a circle.
# radius = float(input("Enter the Radius of the Circle : "))
# print("The Area of the Circle is :",3.14*radius*radius)


# #Ask the user for their birth year and calculate their age.
# birth_year = int(input("Enter Your Birth Year :"))
# current_year = 2025
# print("Your are",current_year-birth_year,"Years Old.")


# #Convert temperature from Celsius to Fahrenheit.
# celcius = float(input("Enter The Temperature in Celcius :"))
# Farenheit = (celcius * 9/5)+32
# print("This temperature in Farenheit is : ",Farenheit)


#Check whether a number is even or odd.
# num = int(input("Enter a num to check weither it is Even or Odd"))
# if num%2==0 :
#     print(" The number is Even.")
# else :
#     print(" The number is Odd.")

#Check if a number is divisible by both 3 and 5.
# num = int(input("Enter a num to check weither it Divisible by both 3 and 5"))
# if num%3==0 and num%5==0 :
#     print("The number is Divisible by both 3 and 5")
# else :
#     print("The number is not Divisible by both 3 and 5")


#Take marks of 3 subjects and print pass/fail (pass if each >=33 and avg >=40).
# sub1 = int(input("Enter marks of subject 1"))
# sub2 = int(input("Enter marks of subject 2"))
# sub3 = int(input("Enter marks of subject 3"))
# avg = sub1+sub2+sub3/3
# if sub1>=33 and sub2>=33 and sub3>=33 and avg>=40:
#  print("Pass")
# else:
#   print("Fail")

# num1 = int(input("Enter number 1 : "))
# num2 = int(input("Enter number 2 : "))
# operation = int(input("Enter the Operation You want to perform : 1.(+) , 2.(-) , 3.(*) , 4.(/)"))
# if operation !=1 and operation !=2 and operation !=3 and operation !=4 :
#     print("Choose a valid Operation")
# else:
#     if operation == 1:
#         print("The Sum of these numbers is : ",num1+num2)
#     elif operation == 2:
#         print("The Difference of these numbers is : ",num1-num2)
#     elif operation == 3:
#         print("The Product of these numbers is : ",num1*num2)
#     else:
#         print("The Division of these numbers is : ",num1/num2)


#Check if a year is a leap year.
# year = int(input("Enter Year to check for Leap :- "))
# if (year%4==0) and (year%100!=0) or (year%400==0):
#     print("Its a Leap Year")
# else:
#     print("Its Not a Leap Year")


#Print multiplication table of any number using for loop.
# for i in range(1,11):
#     print(2," x ",i," = ",2*i)

#Print all even numbers from 1 to 100 using for and while loops.
# for i in range(0,101,2):
#     print(i," ")

# num = 0
# while num < 101 :
#     print(num)
#     num = num+2


#Sum of first N natural numbers using a for loop.
# sum = 0 
# n = 100
# for i in range(1,101,1):
#     sum+=i
# print("The sum of first 100 Natural Numbers is :- ",sum)


#Find factorial of a number using a loop.
# num = 5
# calculate = 1
# for i in range(1,6,1):
#     calculate*=i
# print("The Factorial of 5 is :- ",calculate)


#Print this pattern using loops:
# for i in range(1,6,1):
#     for j in range(i):
#         print("*",end=" ")
#     print()


