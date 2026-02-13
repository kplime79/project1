a,b,c = map(int, input().split())
loop = True


for i in range(a,b):
    if i % c == 0: 
        loop = False


if loop == True:
    print("YES")
else:
    print("NO")