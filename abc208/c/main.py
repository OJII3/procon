import sys

n, k = map(int, sys.stdin.readline().rstrip().split())
a = list(map(int, sys.stdin.readline().rstrip().split()))

a_sorted = sorted(a)

base = k//n
max = k % n

a_checklist = set(a_sorted[0:max])

for ai in a:
    if ai in a_checklist:
        print(base + 1)
    else:
        print(base)
