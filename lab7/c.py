import sys

data = sys.stdin.read().split()
n, m = int(data[0]), int (data[1])

rows = []
pos = 2
for i in range(n):
    rows.append(list(map(int, data [pos:pos + m])))
    pos += m

rows.sort(key = lambda row: (-sum(row), row))

out =[]
for row in rows:
    out.append(' '.join(map(str, row)))
print('\n'.join(out))
