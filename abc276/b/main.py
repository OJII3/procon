import sys

n, m = map(int, sys.stdin.readline().rstrip().split())
cities = [[] for _  in range(0, n)]

for i in range(0, m):
  ai, bi = map(int, sys.stdin.readline().rstrip().split())
  cities[ai-1].append(str(bi))
  cities[bi-1].append(str(ai))

for i in range(0, n):
  cities[i].sort(key=int)
  cities[i].insert(0, str(cities[i].__len__()))
  print(' '.join(cities[i]))
  
