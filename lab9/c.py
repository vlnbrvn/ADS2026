a = input().strip()
b = input().strip()

pos = (b+b).find(a)
if pos == -1 or pos >= len(b):
    print(-1)
else:
    print(pos)
