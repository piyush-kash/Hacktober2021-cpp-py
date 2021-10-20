def toggle(n):
    if doors[n]==1:
        doors[n]=0
    else:
        doors[n]=1
n=int(input('Enter the no. of doors available: '))
m=int(input('Enter the no. of persons: '))
doors=[0]*n
for i in range(1,m+1):
    j=i
    while j<=n:
        toggle(j-1)
        j=j+i
for x in range(n):
    if doors[x]==1:
        print(x+1,end=" ")
