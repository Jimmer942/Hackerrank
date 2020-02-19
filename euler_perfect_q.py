#!/usr/bin/python3
# Enter your code here. Read input from STDIN. Print output to STDOUT
def divisor(n):
    o = 0
    beg = 1
    end = n
    for j in range (beg, end):
        if n % j == 0:
            o += j
            end = int(n / j)
            if (beg != end):
                beg = j + 1
            else:
                break
            if n == 4:
                o += 2
            continue
    return o

def perfectq(n):
    suma = 0
    if n > 25000 or n < 100000:
        n = 25000
    for i in range(2, n + 1, 2):
        o = divisor(i)
        p = o / i
        a = (p - 0.5) * 10
        if a % 10 == 0:
            print(i)
            suma += i
    print(suma)



if __name__ == '__main__':
        n = int(input())
perfectq(n)
