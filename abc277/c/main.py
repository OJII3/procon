import sys

n = int(sys.stdin.readline().rstrip())
a = list(range(n))
b = list(range(n))

for i in range(n):
  a[i], b[i] = map(int, sys.stdin.readline().rstrip().split())
  
def search_next(candits):
  for candit in candits:
    last = 0
    for i 