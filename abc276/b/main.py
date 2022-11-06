import sys

n, m = map(int, sys.stdin.readline().rstrip().split())
a, b = list(range(0, m)), list(range(0, m))
for i in range(1, m):
    a[i-1], b[i-1] = map(int, sys.stdin.readline().rstrip().split())

print(n, m, a, b)

cities = []
for i in range(1, n+1):
    l = []
    num = 0
    
    #search i
    for j in range(0, m):
        try:
            if(a.index(i, j) >= 0):
                print(i, a.index(i, j), b[a.index(i, j)])
                num += 1
                l.append(b[a.index(i, j)])
        except:
            None

    
    l.insert(0, num)
    cities.append(l)
    
print(cities)
