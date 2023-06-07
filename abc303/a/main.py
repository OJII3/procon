import sys

n = int(sys.stdin.readline().rstrip())
s = sys.stdin.readline().rstrip()
t = sys.stdin.readline().rstrip()

if s.replace('o', '0').replace('l', '1') == t.replace('o', '0').replace('l', '1'):
    print('Yes')
else:
    print('No')
