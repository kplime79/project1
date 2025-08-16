def A(n):
    if n == 0:
        return
    print(n, end=' ')   # 올라가는 출력
    A(n-1)
    print(n, end=' ')   # 내려가는 출력

n = int(input())
A(n)

# Please write your code here.