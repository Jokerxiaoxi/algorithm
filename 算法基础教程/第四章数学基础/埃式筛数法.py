st=[False for i in range(int(1e6)+1)]
prime=[0 for i in range(int(1e6)+1)]

def get_prime(n):
    cnt=0
    for i in range(2,n+1):
        if st[i]==False:
            prime[cnt]=i
            cnt+=1
            for j in [i*k for k in range(2,int(n/i)+1)]:
                st[j]=True
    return cnt
n=eval(input())
get_prime(n)
print(get_prime(n))
for i in prime:
    if i!=0:
        print(i)
