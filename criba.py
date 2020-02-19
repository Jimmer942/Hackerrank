#!/usr/bin/python3


n = 101
l = list(range(2, n + 1))
for i in l:
    for j in l:
        if j % i == 0 and j != i:
            del l[l.index(j)]
print(l)
