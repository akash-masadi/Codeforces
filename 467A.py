c=0
x=int(input())
for _ in range(x):
    a,b=map(int,input().split())
    if a<b:c+=1
print(c)