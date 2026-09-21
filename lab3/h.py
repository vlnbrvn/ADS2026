from bisect import bisect_left
import sys

d=sys.stdin.read().split()
n, k = int(d[0]), int(d[1])
a = list(map(int, d[2:2 + n]))

pref =[0]
for x in a:
    pref.append(pref[-1] + x)

ans = n
for i in range(n):
    j = bisect_left(pref, pref[i] + k, i+1)
    if j <= n:
        ans = min(ans, j-i)

print(ans)
