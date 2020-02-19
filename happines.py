#!/usr/bin/python3
size = input()
my_list = input()
A = input()
B = input()

my_list = list(my_list.split(" "))
A = list(A.split(" "))
B = list(B.split(" "))

happines = 0

for i in A:
    for k in my_list:
        if i == k:
            print("{} = {}".format(i, k))
            happines += 1
for i  in B:
    for k in my_list:
        if i == k:
            print("{} = {}".format(i, k))
            happines -= 1
print(happines)
