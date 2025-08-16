N = int(input())

def A(n):
    if n == 0:
        return
    A(n - 1)
    # 마지막 숫자(n==N)만 줄바꿈, 그 외엔 공백
    print(n, end='\n' if n == N else ' ')

def B(n):
    if n == 0:
        return
    # 내림차순: 마지막 숫자(1)만 줄바꿈, 그 외엔 공백
    print(n, end='\n' if n == 1 else ' ')
    B(n - 1)

A(N)
B(N)

# Please write your code here.