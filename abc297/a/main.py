import sys

n, d = map(int, sys.stdin.readline().split())
t = list(map(int, sys.stdin.readline().split()))


def count():
    for i in range(1, n):
        if (t[i] - t[i-1] <= d):
            return print(t[i])

    return print(-1)


count()
