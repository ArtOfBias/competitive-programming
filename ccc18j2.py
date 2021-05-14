# 18 j2

import sys

length = int(sys.stdin.readline())
y = sys.stdin.readline()
t = sys.stdin.readline()

sum = 0

for i in range(length):
    if (y[i] == "C") and (t[i] == "C"):
        sum += 1

print(sum)