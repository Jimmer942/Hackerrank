#!/usr/bin/python3

import math
import os
import random
import re
import sys

# Complete the staircase function below.
def staircase(n):
    a = n - 1
    e = 1
    for i in range(n):
        for i in reversed(range(a)):
            print("{}".format(" "), end='')
        for i in range(e):
            print("#", end='')
        if e != n:
            print()
        a -= 1
        e += 1
        if e == n + 1:
            break


if __name__ == '__main__':
    n = int(input())

    staircase(n)
