import sys

n, m = map(int, sys.stdin.readline().rstrip().split())
root = [-1] * (n + 1)


def find(x):
    if root[x] < 0:
        return x
    else:
        root[x] = find(root[x])
        return root[x]


def unite(x, y):
    x = find(x)
    y = find(y)

    if x == y:
        return
    
    root[y] = x


for _ in range(m):
    a, b = map(int, sys.stdin.readline().rstrip().split())
    unite(a, b)

seen = []
multi = []

for elem in root:
    if elem == -1:
        seen.append(elem)
    elif elem not in seen:
        seen.append(elem)
    elif elem not in multi:
        multi.append(elem)

print(len(multi))
