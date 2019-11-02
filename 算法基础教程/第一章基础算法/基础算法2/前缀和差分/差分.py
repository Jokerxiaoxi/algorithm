def insert(l, r,c):
    b[l]+=c
    b[r+1]-=c
if __name__=="__main__":
    n,m=map(eval,input().split())
    a=[0]+list(map(eval,input().split()))
    b=[0 for i in range (n+2)]
    for i in range(1,n+1):
        insert(i,i,a[i])
    for i in range(m):
        l,r,c=map(eval,input().split())
        insert(l,r,c)
    for i in range(1,n+1):
        b[i]+=b[i-1]
        print(b[i],end=" ")



