n,m,q=map(eval,input().split())
a=[[0] for i in range(n+10)]
s = [[0 for j in range(m+10)] for i in range(n+10)]
for i in range(1,n+1):
    a[i]=a[i]+list(map(eval,input().split()))        
    for j in range(1,m+1):
        s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i][j]
for i in range(q):
    x1, y1, x2, y2 = map(eval,input().split())
    print(s[x2][y2]-s[x1-1][y2]-s[x2][y1-1]+s[x1-1][y1-1])
    

    
