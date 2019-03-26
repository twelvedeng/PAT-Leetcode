cnt = 0
n = int(input())
while n != 1 :
    if n%2 != 0 :
        n = 3*n + 1
    n = n/2
    cnt = cnt+1
print(cnt)
