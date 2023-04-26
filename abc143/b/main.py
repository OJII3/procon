import sys

n = int(sys.stdin.readline())
d = list(map(int, sys.stdin.readline().rstrip().split()))

total = 0

for i in range(n):
    total += d[i] * (sum(d) - d[i])

print(int(total/2))
