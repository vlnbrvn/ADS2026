n, m = map(int, input().split())
g = [list(input().strip()) for _ in range(n)]

cnt = 0
for i in range(n):
    for j in range(m):
        if g[i][j] == '1':
            cnt += 1
            g[i][j] = '0'
            st = [(i, j)]
            while st:
               x, y = st.pop()
               for a, b in ((x+1, y) , (x - 1, y), (x, y + 1), (x, y - 1)):
                  if 0 <= a < n and 0 <= b < m and g[a][b] == '1':
                      g[a][b] = '0'
                      st.append((a,b))

print(cnt)
