import sys

def main():
    r = sys.stdin.buffer.read().split()
    n, m = int(r[0]), int(r[1])
    p = list(range(n + 1))

    def find(x):
        while p[x] != x:
            p[x] = p[p[x]]
            x = p[x]
        return x

    for i in range(m):
        a, b = int(r[2 + 2 * i]), int(r[3 + 2 * i])
        p[find(a)] = find(b)

    s, f = int(r[2 + 2 * m]), int(r[3 + 2 * m])
    print("YES" if find(s) == find(f) else "NO")

main()
