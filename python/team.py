count = 0
for _ in range(int(input())): # n value
    p,v,s=map(int, input().split())
    if p+v+s >= 2:
        count+=1
print(count)
