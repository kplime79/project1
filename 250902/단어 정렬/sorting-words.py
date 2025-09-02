n = int(input())
word = [input() for _ in range(n)]

word.sort()

# Please write your code here.
for j in range(len(word)):
    print(word[j])