import sys

s = list(sys.stdin.readline().strip())

for i in range(len(s)):
    if i % 2 == 1 and i > 0:
        x = s[i]
        s[i] = s[i-1]
        s[i-1] = x

print(''.join(s))
