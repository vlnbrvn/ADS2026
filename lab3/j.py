import sys

d=sys.stdin.read().split()
n, k = int(d[0]), int(d[1])

m =[]
for i in range(n):
    x2 = int(d[2 + 4 * i + 2])
    y2 = int(d[2 + 4 * i + 3])
    m.append(max(x2, y2))

m.sort()
print(m[k-1])
