import sys

n = int(sys.stdin.readline().rstrip())
s = set(sys.stdin.readline().rstrip())

if 'o' in s and not 'x' in s:
    print('Yes')
else:
    print('No')
