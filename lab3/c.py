from bisect import bisect_left
import sys

d=sys.stdin.read().split()
n, m = int(d[0]), int(d[1])

ends = []
total = 0
for i in range(n):
    total += int(d[2+i])
    ends.append(total)

res = []
for i in range(m):
    line = int(d[2+n+i])
    res.append(bisect_left(ends, line) + 1)

print("\n".join(map(str, res)))
