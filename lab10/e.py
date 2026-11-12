import sys

def main():
    lines = sys.stdin.read().split('\n')
    n, q = map(int, lines[0].split())
    a = [lines[1 + i].split() for i in range(n)]
    out = []
    for i in range(q):
        e = [int(x) - 1 for x in lines[1 + n + i].split()]
        ok = all(a[e[i]][e[j]] == '1'
              for i in range(len(e)) for j in range(i + 1, len(e)))
        out.append("YES" if ok else "NO")
    print("\n".join(out))

main()
