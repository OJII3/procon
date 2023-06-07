import sys

n = int(sys.stdin.readline().rstrip())
sa = []

for i in range(n):
    a, b = map(str, sys.stdin.readline().rstrip().split())
    sa.append([i, a, int(b)])

a = sorted(sa, key=lambda x: x[2])
min_index = a[0][0]
for i in range(min_index, n + min_index):
    print(sa[i if i < n else i - n][1])
