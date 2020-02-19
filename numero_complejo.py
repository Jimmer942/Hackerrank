#!/usr/bin/python3

import cmath

if __name__ == '__main__':
        c = complex(input())
        r = abs(c) #magnitud del numero
        a = cmath.phase(c) # angulo o fase del numero
        print(r)
        print(a)
