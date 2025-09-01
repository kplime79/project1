n = int(input())

def pl(n):
    if n == 1:
        return 1
    
    return pl(n-1) + n
print(pl(n))