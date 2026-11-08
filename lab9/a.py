a = input().strip()
b = input().strip()

k = 1
t = a
while len(t) < len(b):
    t += a
    k += 1

if b in t:
    print(k)
elif b in t + a:
    print(k + 1)
else:
    print(-1)
