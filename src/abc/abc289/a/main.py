import sys

s = sys.stdin.readline().rstrip()

print(s.replace('0', '2').replace('1', '0').replace('2', '1'))

