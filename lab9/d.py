
s = input().strip().lower()
n = int(input())
names = [input().strip() for _ in range(n)]

def f(c):
    c = c.lower()
    for L in range(min(len(c), len(s)), 0, -1):
        if c[:L] == s[-L:]:
            return L
    return 0

v = [f(c) for c in names]
m = max(v)

if m == 0:
    print(0)
else:
    res = [c for c, x in zip(names, v) if x == m]
    print(len(res))
    print("\n".join(res))
