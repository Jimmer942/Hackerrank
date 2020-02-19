#!/usr/bin/python3
import sys

suma1 = 0
suma2 = 0
beg = 1
a = 1
t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    if a == n:
        print(suma2)
        continue
    if n > a:
        beg = a
        suma1 = suma2
    else:
        beg = 1
    for i in range(beg, n):
        if i % 3 == 0 or i % 5 == 0:
            suma1 += i
    print(suma1)
    suma2 = suma1
    suma1 = 0
    a = n
