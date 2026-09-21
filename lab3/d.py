from bisect import bisect_right
import sys

d = sys.stdin.read().split()
n = int(d[0])
a = sorted(map(int, d[1:1 + n]))

pref = [0]
for x in a:
    pref.append(pref[-1] + x)

q = int(d[1+n])
res = []
for i in range(q):
    p = int(d[2+n+i])
    k = bisect_right(a, p)
    res.append(f"{k} {pref[k]}")

print("\n".join(res))
