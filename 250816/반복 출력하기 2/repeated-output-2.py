n = int(input())
def A(n):
    if n == 0:
        return
    A(n-1)
    print('HelloWorld')

A(n)
# Please write your code here.