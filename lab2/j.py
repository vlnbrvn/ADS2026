import sys
a =[]

for line in sys.stdin:
    c = line.split()
    if not c:
        continue
    cmd = int(c[0])

    if cmd == 0:
        break

    elif cmd == 1:
        a.insert(int(c[2]), int(c[1]))

    elif cmd ==2:
        a.pop(int(c[1]))

    elif cmd == 3:
       if a:
           print(*a)
       else:
           print(-1)

    elif cmd == 4:
       node = a.pop(int(c[1]))
       a.insert(int(c[2]), node)

    elif cmd == 5:
        a.reverse()

    elif cmd == 6 or cmd == 7:
        if a:
            n = len(a)
            x = int(c[1]) %n
            if cmd == 7:
                x = n-x
            a = a[x:] + a[:x]
