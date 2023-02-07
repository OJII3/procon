import sys

n, k = map(int, sys.stdin.readline().rstrip().split())

handlenames = [sys.stdin.readline().rstrip() for i in range(k)]

print('\n'.join(sorted(handlenames)))
