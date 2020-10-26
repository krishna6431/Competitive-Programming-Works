a=int(input())
b=bin(a)
print(b)
c=str(b[2:])
print(c)
res=0
for i in range(0,len(c)):
    res+=int(c[i])*pow(2,i)

print(res)    
