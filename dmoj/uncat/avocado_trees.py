# avocado trees


import sys
from typing import List


nqh: list = [int(x) for x in sys.stdin.readline().split(" ")]

n = nqh[0]
q = nqh[1]
h = nqh[2]

sums: List[int] = []

sums.append(0)

best, csum = 0, 0

for i in range(n):
    ab = [int(x) for x in sys.stdin.readline().split(" ")]
    if ab[0] <= h:
        csum += ab[1]
    sums.append(csum)

for i in range(q):
    ab = [int(x) for x in sys.stdin.readline().split(" ")]
    a = ab[0]
    b = ab[1]
    if sums[b] - sums[a - 1] > best:
        best = sums[b] - sums[a - 1]

sys.stdout.