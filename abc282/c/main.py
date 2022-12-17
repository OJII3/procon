import sys
import re

n: int = int(sys.stdin.readline().rstrip())
s: str = sys.stdin.readline().rstrip()
s_list = list(s)

is_out = True

for i in range(n):
  if is_out & (s_list[i] != '"'):
    s_list[i] = '.'
  elif s_list[i] == '"':
    is_out = not is_out


print(s, s_list)
