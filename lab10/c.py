n, m = map(int, input().split())

ops =[]
cur = m
while cur > n:
    if cur % 2:
        cur +=1
        ops.append('-')
    else:
        cur //=2
        ops.append('*')

res = []
x = n
while x > cur:
    x -= 1
    res.append(x)
for o in reversed(ops):
    x = x * 2 if o == '*' else x - 1
    res.append(x)

print(len(res))
print(*res)
