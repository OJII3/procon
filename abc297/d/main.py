import sys

sys.setrecursionlimit(10**6)

a, b = map(int, sys.stdin.readline().rstrip().split())

def control(x, y, count):
    if (x == y):
        return print(count)
    elif (x > y):
        x = x - y
        control(x, y, count + 1)
    else:
        y = y - x
        control(x, y, count + 1)

control(a, b, 0)
