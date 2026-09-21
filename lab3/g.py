import sys

d=sys.stdin.read().split()
n, k = int(d[0]), int(d[1])
a= list(map(int, d[2:2 + n]))

def enough(l):
    total = 0
    for x in a:
        total += int(x/l)
        if total >= k:
            return True
    return False

left, right = 0.0, float(max(a))
for _ in range(70):
    mid = (left + right) / 2
    if enough(mid):
        left = mid
    else:
        right = mid

print(f"{left:.9f}")
