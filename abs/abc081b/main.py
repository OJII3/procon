import sys

n = int(sys.stdin.readline().rstrip())
an = list(map(int, sys.stdin.readline().rstrip().split()))


l = list()
for ai in an:
  b = str(bin(ai))
  l.append(int(len(b) - b.rindex('1') -1))

print(min(l))
  