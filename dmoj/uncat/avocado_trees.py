# avocado trees

import sys


nqh = [int(x) for x in sys.stdin.readline().split()]

sums = [0]

best, csum = 0, 0

for i in range(nqh[0]):
    ab = [int(x) for x in sys.stdin.readline().split()]
    if ab[0] <= nqh[2]:
        csum += ab[1]
    sums.append(csum)

for i in range(nqh[1]):
    ab = [int(x) for x in sys.stdin.readline().split()]
    if sums[ab[1]] - sums[ab[0] - 1] > best:
        best = sums[ab[1]] - sums[ab[0] - 1]

print(best)