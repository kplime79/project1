n, k = map(int, input().split())
nums = list(map(int, input().split()))

count = 1
nums.sort()
for j in range(n):
    if count == k:
        print(nums[j])
    count += 1
# Please write your code here.
