n = int(input())
def A(n):
    if n == 0:
        return
    print('* ' * n)
    A(n-1)
    print('* ' * n)
A(n)
# Please write your code here.