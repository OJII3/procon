import sys

n, x = map(int, (sys.stdin.readline().rstrip().split()))
a = list(map(int, sys.stdin.readline().rstrip().split()))


for i in range(n):
  if (a[i] == x):
    print(i+1)