Write a loop that prints numbers from 1 to 20 but skips multiples of 4.
for i in range(1,21,1):
    if i%4==0:
        continue
    else:
        print(i)

Take input until the user enters "exit". Skip empty inputs using continue.
take = input("Enter exit to exit .")
while(take!="exit"):
    take = input("Enter exit to exit .")
    if take == " ":
        continue
    if take == "exit":
        break

Print all numbers from 1 to 50. Stop printing when you encounter a number divisible by 13 using break.
for i in range(1,51,1):
    if i%13==0:
        break
    else:
        print(i)

Write a function to check if a number is even or odd.
def checker(a):
    if a%2==0:
        print("The number is even.")
    else:
        print("The number is odd.")

num = int(input("Enter a number to check for even or odd ..."))
checker(num)

Write a function that takes name and age as arguments and prints a greeting message.
def greetings(name,age):
    print(f"Hey {name} , Congratulation on becoming of {age} year old.")
name = input("Enter Your name:-")
age  = int(input("Enter Your age:-"))

greetings(name,age)

Write a function to find the factorial of a number using loops.
def factorial(num):
    total = 1
    for i in range(1,num+1):
        total*=i
    return total

num = int(input("Enter the number to find the factorial:-"))
print(f'The factorial of {num} is :',factorial(num))

Create a list of your 5 favorite movies and print them one by one.
movies = ["Money Heist","Wednesday Addams","The Last Kingdom","The Queens's Gambit","Top Gun Mavrik"]
for i in movies:
    print(i)

Access the last element of the list using negative indexing.
movies = ["Money Heist","Wednesday Addams","The Last Kingdom","The Queens's Gambit","Top Gun Mavrik"]
print(movies[len(movies)-1])

Slice the first 3 items of a list using slicing.
movies = ["Money Heist","Wednesday Addams","The Last Kingdom","The Queens's Gambit","Top Gun Mavrik"]
print(movies[0])
print(movies[1])
print(movies[2])

#Make a list of numbers 
numbers = [1,3,23,19,2,54,27,76,44]
print(numbers)
#Append 99 to the end
numbers.append(99)
print(numbers)
#Insert 0 at the beginning
numbers.insert(0,0)
print(numbers)
#Sort the list in descending order
numbers.sort(reverse=True)
print(numbers)
#Remove the largest number
numbers.remove(numbers[0])
print(numbers)

Create a list of guests. Add and remove guests dynamically using .append() and .remove().
guests = ["Zain","Zunaira"]
print(guests)
guests.append("Ammara")
print(guests)
guests.append("Asmara")
print(guests)
guests.remove(guests[0])
print(guests)

Create a tuple of 4 items and print the second and last item.
tuple = (1,2,3,4)
print(type(tuple))
print(tuple)
print(tuple[1])
print(tuple[3])

Write a function that accepts a tuple and returns the sum of all numeric values.
def sum(tuple):
    count = 0
    for i in tuple:
        count+=i
    return count
tuple = (1,2,3,4)
print("The sum of the tuple is :",sum(tuple))

Try modifying a tuple element. What happens?
tuple = (1,2,3,4)
tuple[0] = 5
print(tuple)

Count how many times 7 appears in this tuple: (1, 7, 2, 7, 3, 4, 7)
tuple = (1, 7, 2, 7, 3, 4, 7)
print(tuple.count(7))

Concatenate two tuples: t1 = (1, 2) and t2 = (3, 4)
t1 = (1, 2)
t2 = (3, 4)
t3 = t1+t2
print(t3)

Slice the tuple: print every second item from the tuple.
tuple = (1, 7, 2, 7, 3, 4, 7)
for i in range(0,len(tuple),2):
    print(tuple[i])

Print a report card like:
Name = "Ali" 
Math = 90 
English =  85 
Total = 175
print(f"Name: {Name} | Math: {Math} | English: {English} | Total: {Total}")

Create a set of 5 unique student names. Try adding a duplicate—what happens?
set = {"Zain","Zunaira","Ammara","Asmara","Zain"}
print(type(set))
print(set)
set.add("Ammara")
print(set)

Print union, intersection, and difference
a = {1, 2, 3, 4}
b = {3, 4, 5, 6}
print(a.union(b))
print(a.intersection(b))
print(a.difference(b))

Remove duplicates from a list using set().
my_list = [1, 2, 2, 3, 4, 4, 5]
unique_list = list(set(my_list))
print(unique_list) 
