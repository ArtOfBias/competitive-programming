# 11 s1

import sys
count = int(sys.stdin.readline())

s = ""

for i in range(count):
    s = s + sys.stdin.readline()

s = s.lower()
a = s.count('t')
b = s.count('s')

if a > b:
    print("English")
else:
    print("French")