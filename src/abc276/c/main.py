import sys
import itertools

n = int(sys.stdin.readline().rstrip())
p = list(map(str, sys.stdin.readline().rstrip().split()))

for i in range(n):
  last = len(p) -1
  if int(p[last-i-1]) > int(p[last-i]):
    formar = p[:last-i-1]
    latter = p[last-i-1:]
    latter_sorted = sorted(latter, key=int, reverse=False)
    next_large = latter_sorted[latter_sorted.index(latter[0])-1]
    latter.remove(next_large)
    print(' '.join(formar + [next_large] + sorted(latter, key=int, reverse=True)))
      
    break