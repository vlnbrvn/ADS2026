import sys

d = sys.stdin.read().split()
n, h = int(d[0]), int(d[1])
a = list(map(int, d[2:2 + n]))

def hours(k):
    total = 0
    for x in a:
        total += (x + k -1) // k
    return total

left, right = 1, max(a)
while left < right:
    mid = (left + right) // 2
    if hours(mid) <= h:
        right = mid
    else:
        left = mid + 1

print(left)
