N = int(input())
b = True

for i in range(2,int(N**0.5)+1):
    if N % i == 0:
        b = False
        break

if b:
    print("P")
else:
    print("C")