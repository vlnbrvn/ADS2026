def match(s, p):
    t = p + '#' + s
    n, m = len(t), len(p)
    z = [0] * n
    l = r = 0
    for i in range(1, n):
        if i < r:
            z[i] = min(r - i, z[i - l])
        while i + z[i] < n and t[z[i]] == t[i + z[i]]:
            z[i] += 1
        if i + z[i] > r:
            l, r = i, i + z[i]
    return [z[m + 1 + i] >= m for i in range(len(s))]

a, b, p = input().strip(), input().strip(), input().strip()
x, y = match(a, p), match(b, p)
print(sum(u and v for u, v in zip(x, y)))
