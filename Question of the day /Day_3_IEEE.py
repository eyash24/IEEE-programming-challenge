# Write a program to accept n numbers and display the sum of highest and lowest numbers.
n=int(input(""))
li=list()

for i in range(0,n):
    n_ = int(input())
    li.append(n_)

n_max = max(li)
n_min = min(li)
sum = n_max + n_min
print(sum)