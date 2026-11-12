import sys, heapq

r = sys.stdin.read().split()
n, m = int(r[0]), int(r[1])
g = [[] for _ in range(n + 1)]
deg = [0] * (n + 1)
for i in range(m):
    a, b = int(r[2 + 2 * i]), int(r[3 + 2 * i])
    g[a].append(b)
    deg[b] += 1

h = [i for i in range(1, n+1) if deg[i] == 0]
heapq.heapify(h)
res = []
while h:
    x = heapq.heappop(h)
    res.append(x)
    for y in g[x]:
        deg[y] -= 1
        if deg[y] == 0:
            heapq.heappush(h, y)

if len(res) == n:
    print("Possible")
    print(*res)
else:
    print("Impossible")
