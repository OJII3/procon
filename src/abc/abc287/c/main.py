import sys


def inplement():
    n, m = map(int, sys.stdin.readline().rstrip().split())

    if n != m + 1:
        print("No")
        return

    root = [-1] * n
    for i in range(m):
        u, v = map(int, sys.stdin.readline().rstrip().split())
        print(u, v)
        root[u-1] -= 1
        root[v-1] += u
        root[v-1] -= 1
        root[u-1] += v

    print(root)


inplement()
