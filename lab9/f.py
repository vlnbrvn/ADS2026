s = input().strip()
t = input().strip()
n, m = len(s), len(t)

pi = [0] * m
for i in range(1,m):
    j = pi[i-1]
    while j > 0 and t[i] != t[j]:
        j = pi[j - 1]
    if t[i] == t[j]:
        j += 1
    pi[i] = j

res = []
j = 0
for i in range(n):
    while j > 0 and (j == m or s[i] != t[j]):
        j = pi[j - 1]
    if s[i] == t[j]:
        j += 1
    if j == m:
        res.append(i - m + 2)

print(len(res))
print(*res)
