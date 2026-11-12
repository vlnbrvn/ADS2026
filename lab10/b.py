from collections import deque

n = int(input())
g = [input().split() for _ in range(n)]
s, e = map(int, input().split())
s -= 1
e -= 1

d = [-1] * n
d[s] = 0
q = deque([s])
while q:
    v = q.popleft()
    for u in range(n):
        if g[v][u] == '1' and d[u] == -1:
            d[u] = d[v] + 1
            q.append(u)
print(d[e])
