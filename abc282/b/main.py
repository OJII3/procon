import sys

n, m = map(int, sys.stdin.readline().rstrip().split())
s = list(range(n))
count = 0

for i in range(n):
  str = sys.stdin.readline().rstrip()
  s[i] = int(str.replace('o', '1').replace('x', '0'), 2)
  
for i in range(n):
  for j in range(i + 1, n):
    if bin(s[i] | s[j]).count('1') == m:
      count += 1
  
print(count)