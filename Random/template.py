# cook your dish here
first = 0
second = 0
x = 0
l = []
for i in range(int(input())):
    first = 0
    second = 0
    x = 0
    n = int(input())
    l = list(int(x) for x in input().split())

    for i in range(len(l)):
        if i % 2 is 0 and i is not 0:
            second += l[i]

        if i % 2 is not 0 and i is not 1:
            first += l[i]

    second += l[1]
    first += l[0]
    if second > first:
        print('second')
    elif second < first:
        print('first')
    elif second is first:
        print('draw')
