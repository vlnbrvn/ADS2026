import sys

d=sys.stdin.read().split()
n, k = int(d[0]), int(d[1])
a = list(map(int, d[2:2 + n]))

def ok(m):
    blocks = 1
    cur = 0
    for x in a:
        if cur + x > m:
            blocks +=1
            cur = x
        else:
            cur+=x
    return blocks <=k

left, right = max(a), sum(a)
while left < right:
    mid = (left + right) // 2
    if ok(mid):
        right = mid
    else:
        left = mid + 1

print(left)
