n = int(input())
def counting_star(n):
    if n == 0:
        return
    counting_star(n-1)
    print('*' * n)

counting_star(n)
# Please write your code here.