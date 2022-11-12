import sys
import re

n = int(sys.stdin.readline().rstrip())
s = list(range(n))

out = True
pasts = 'HHH'

for i in range(n):
  s[i] = str(sys.stdin.readline().rstrip())
  [first, second] = list(s[i])
    
  if (bool(re.compile('H|D|C|S').match(first)) == False):
    out = False
    break
  
  if (bool(re.compile('A|2|3|4|5|6|7|8|9|T|J|Q|K').match(second)) == False):
    out = False
    break
  
  if (bool(re.compile(pasts).match(s[i])) == True):
    out = False
    break
  
  pasts += '|' + s[i]
  
print('Yes' if out else 'No')