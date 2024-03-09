import sys

n, m = map(int, sys.stdin.readline().rstrip().split())

a = list(map(int, sys.stdin.readline().rstrip().split()))

def dfs(c):
    if c in a:
        return dfs(c+1)
    else:
        return c


v = [str(i) for i in range(n + 1)]
l = ''

i = 1
while i <= n+1:
    nx = dfs(i)
    if i == nx:
        i = i + 1
    else:
        l += ' '.join(reversed(sorted(v[i:nx + 1]))) + ' '
        i = nx

print(l.rstrip())
