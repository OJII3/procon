import sys

h, w = map(int, sys.stdin.readline().rstrip().split())

for i in range(h):
    si = list(sys.stdin.readline().rstrip())
    for j in range(1, w):
        if si[j-1] == 'T' and si[j] == 'T':
            si[j-1] = 'P'
            si[j] = 'C'

    print(''.join(si))
