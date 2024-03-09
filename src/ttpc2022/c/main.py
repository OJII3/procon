import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int, sys.stdin.readline().rstrip().split()))

n = I()
a = LI()
b = LI()
c = LI()
d = LI()
e = LI()


output = 0

for i in range(0, n):
    for j in range(0, n):
        for k in range(0, n):
            for l in range(0, n):
                for m in range(0, n):
                    med = sorted([a[i], b[j], c[k], d[l], e[m]], key=int)[2]
                    output += med


print(int(output%998244353))
