s, k = input().split()
k = int(k)
t = input().strip()

cnt = 0
pos = t.find(s)
while pos != -1:
    cnt += 1
    if cnt >=k:
        break
    pos = t.find(s, pos+1)

print("YES" if cnt >= k else "NO")
