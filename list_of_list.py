#!/usr/bin/env python3

n = int(input())

dic = {}
cont = 0

for i in range(n):
    w = input()
    if w not in dic:
        cont += 1
        dic[str(w)] = 1
    else:
        dic[str(w)] += 1
print(cont)
for i in dic.values():
    print('{} '.format(i), end='')
print()
