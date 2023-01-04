
"""
Write a program to find whether the given number is an Armstrong number or not .
It is an integer such that the sum of the cubes of its digits is equal to the number itself
"""
num = str(input())
sum = 0

# Transversing through num as str
for i in num:
    sum += int(i)**3

if sum == int(num):
    print("Armstrong number")
else:
    print("Not an Armstrong number")


