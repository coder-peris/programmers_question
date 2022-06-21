# WAP to store name, company, salary and programming languages of some programmers in python and display the data.

import os
os.system("cls")
class Programmers:
    __name = ""
    __company = ""
    __salary = 0
    __lanList = []

    def __init__(self, name, lan, salary, company):
        self.__name = name
        self.__lanList = lan
        self.__salary = salary
        self.__company = company

    def showInfo(self):
        print(f"Name : {self.__name}\nCompany : {self.__company}\nSalary : {self.__salary}")
        print("Languages : ",end="")
        print(self.__lanList)

p = []
n = int(input("Enter the no. of programmers : "))
i = 0
while(i < n):
    print(f"\nFor programmer {i+1} :")
    name = input("Enter the name : ")
    salary = int(input("Enter the salary per month in US $ : "))
    company = input("Enter the company : ")
    lanNo = int(input("Enter no. of programming languages u know: "))
    lan = []
    j = 0
    while(j < lanNo):
        lan.append(input(f"Enter the name of language {j+1} : "))
        j = j+1
    p.append(Programmers(name, lan, salary, company))
    i = i+1

print("Press any key to see stored data...")
os.system("pause>0")
os.system("cls")
print("Displaying the data...")
i = 0
while(i < n):
    print(f"\nFor programmer {i+1} :")
    p[i].showInfo()
    i = i+1
print("\nPress any key to exit...")
os.system("pause>0")
print("Exitted successfully.")