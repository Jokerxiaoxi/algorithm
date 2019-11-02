N=300010
a=[0 for i in range (N)]
s=[0 for i in range (N)]
n,m=map(eval,input().split())
alls=[]
query=[]
add=[]
for i in range(0,n):
    x,c=map(eval,input().split())
    alls.append(x)
    add.append((x,c))
for i in  range(0,m):
    l,r=map(eval,input().split())
    alls.append(l)
    alls.append(r)
    query.append((l,r))
set(sorted(alls))
for i in add:
    x=alls.index(i[0])+1
    a[x]+=i[1]
for i in range(1,len(alls)+1):
    s[i]=s[i-1]+a[i]
for i in query:
    l=alls.index(i[0])+1
    r=alls.index(i[1])+1
    print(s[r]-s[l-1])




