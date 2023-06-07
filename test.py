import sys

n = int(sys.stdin.readline().rstrip())
v = list(map(int, sys.stdin.readline().rstrip().split()))
sum = 0

for i in range(1, n-1):
    a = v[i-1]
    b = v[i]
    c = v[i+1]
    if a < b and b > c:
        sum += 1

print(sum)
    
