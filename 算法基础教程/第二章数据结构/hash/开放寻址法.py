N=20003
h=[None for i in range(0,N+1)]
def find(x):
    t=(x%N+N)%N
    while(h[t]!=x and h[t]!=None):
        t+=1
        if(t == N):
            t = 0
    return t

if __name__=="__main__":
    n=eval(input())
    for i in range(n):
        opration=input().split()
        if opration[0]=='I':
            h[find(eval(opration[1]))]=eval(opration[1])
        else:
            if(h[find(eval(opration[1]))]!=None):
                print("Yes")
            else:
                print("No")



