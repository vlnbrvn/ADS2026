from bisect import bisect_left
import sys

d = sys.stdin.read().split()
q = int(d[0])
queries = list(map(int, d[1:1 + q]))
n, m = int(d[1 + q]), int(d[2 + q])
pos = 3+q

s = []
for r in range(n):
    row = list(map(int, d[pos:pos + m]))
    pos += m
    if r % 2 == 1:
        row.reverse()
    s.extend(row)

neg = [-v for v in s]

out = []
for x in queries:
    t = bisect_left(neg, -x)
    if t < len(neg) and neg[t] == -x:
        r, c = t // m, t % m
        if r % 2 == 1:
            c = m - 1 - c
        out.append(str(r) + " " + str(c))
    else:
        out.append("-1")

print("\n".join(out))
