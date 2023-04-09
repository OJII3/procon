import sys

s = list(map(str, sys.stdin.readline().rstrip()))

xy = []
rxy = []
z: int

def check():
    for i in range(len(s)):
        if s[i] == 'B':
            xy.append(i)
        if s[i] == 'R':
            rxy.append(i)
        if s[i] == 'K':
            z = i

    if (xy[0] - xy[1]) % 2 == 0:
        return print('No')

    if not (rxy[1] > z and z > rxy[0]):
        return print('No')

    return print('Yes')

check()
