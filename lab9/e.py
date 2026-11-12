t = int(input())
for _ in range(t):
    s, k = input().split()
    k = int(k)
    n = len(s)

    pi = [0] * n
    for i in range(1,n):
        j = pi[i - 1]
        while j > 0 and s[i] != s[j]:
            j = pi[j - 1]
        if s[i] == s[j]:
            j += 1
        pi[i] = j

    p = pi[-1]
    print(n + (k-1) * (n - p))
