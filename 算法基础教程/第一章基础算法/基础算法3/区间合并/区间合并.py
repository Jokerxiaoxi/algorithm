n=eval(input())
segs=[]
res=[]
for  i in range(n):
    l,r=map(eval,input().split())
    segs.append((l,r))
sorted(segs,key=lambda x:x[0])
st=segs[0][1]
ed=segs[0][1]
for i in segs[1:]:
    if i[0]>ed:
        res.append((st,ed))
        st=i[0]
        ed=i[1]
    else:
        ed=max(ed,i[1])
if st!=segs[0]:
    res.append((st,ed))
print(len(res))
#print(res)

    

