N=eval(input())
P=" "+input()
M=eval(input())
S=" "+input()
#print(P)
#print(S)
ne=[]
j=0
ne=[0 for i in range(0,10011)]
for i in range(2,N+1):
    while(j>0 and P[i]!=P[j+1]):
        j=ne[j]
    if (P[i]==P[j+1]):
        j+=1
    ne[i]=j
#print([i for i in ne if i!=0])
#匹配过程
j=0
for i in range(1,N+1):
    while(j>0 and P[i+1]!=S[j]):
        j=ne[j]
    if(j>0 and P[i+1]==S[j]):
        j+=1
    if(j==N):
        print("{} ".format(i-N),end="")
        j=ne[j]

