n, m = map(int, input().split())
number = 0

for j in range(1, min(n,m)+1):
    if n % j == 0 and m % j ==0:
        number = j
print(number)