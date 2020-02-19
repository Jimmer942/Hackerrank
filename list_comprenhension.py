#!/usr/bin/python3
if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    l = []
    sep = ""
    flag = 0

    print("[", end='')
    for i in range(x + 1):
        for j in range(y + 1):
            for k in range(z + 1):
                if (i +j +k) != n:
                    l.append(i)
                    l.append(j)
                    l.append(k)
                    print(sep, end='')
                    flag += 1
                    if flag == 1:
                          sep += ", "
                    print(l, end='')
                    l.remove(i)
                    l.remove(j)
                    l.remove(k)
    print("]")
