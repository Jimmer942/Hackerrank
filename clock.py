#!/usr/bin/python3

import os
import sys

#
# Complete the timeConversion function below.
#

def timeConversion(s):
    h = ""
    ht = 0
    beg = 0
    end = len(s)
    end -= 2
    if s[-2] == "P" or (s[-2] == "A" and s[0] == "1" and s[1] == "2"):
        h1 = int(s[0]) * 10
        h2 = int(s[1])
        ht = h1 + h2
        if ht == 12 and s[-2] == "P":
            ht = 0
        if ht == 12 and s[-2] != "P":
            ht = 0
        else:
            ht = ht - 12 + 24
        if ht < 10:
            h += "0"
            h += str(ht)
        else:
            h += str(ht)
        beg = 2

    for i in range(beg, end):
            h += s[i]
    print(h)
    return h

if __name__ == '__main__':
    s = input()

    result = timeConversion(s)

    print(result)
