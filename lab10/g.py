n, m = map(int, input().split())
g =[[] for _ in range(n + 1)]
deg = [0] * (n+1)
for _ in range(m):
    a, b = map(int, input().split())
    g[a].append(b)
    deg[b] += 1

def ka(d):
    q = [i for i in range(1, n+1) if d[i] == 0]
    for x in q:
        for y in g[x]:
            d[y] -= 1
            if d[y] == 0:
                q.append(y)
    return len(q) == n

ans = ka(deg[:])
for v in range(1, n+1):
    if deg[v] > 0:
        d = deg[:]
        d[v] -= 1
        if ka(d):
            ans = True
            break
print("YES" if ans else "NO")
