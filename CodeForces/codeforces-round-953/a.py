a = int(input())
for i in range(a):
    b = list(map(int,input().split()))
    c = list(map(int,input().split()))
    p =0
    d = c.copy()
    d[0] += b[1]
    y= max(c)
    z =d.index(max(d))
    for i in range(len(c)):
        if i == z:
            print(0,end=' ')
            p += c[i]
            continue
        if c[i] + p + b[1] >= y:
            print(i,end=' ')
        else:
            print(i+1,end=' ')
        p += c[i]
    print()