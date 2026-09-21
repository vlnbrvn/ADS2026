n = int(input())
a = list(map(int, input().split()))
x = int(input())

left = 0;
right = n-1
found = False

while left <= right:
    mid = (left + right)//2
    if a[mid] == x:
        found = True
        break
    elif a[mid] < x:
        left = mid + 1
    else:
        right = mid -1
        
if found:
    print("Yes")
else:
    print("No")
