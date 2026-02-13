arr = [0] * 5
b = True

for i in range(5):
    arr[i] = int(input())

for j in range(5):
    if arr[j] % 3 != 0:
        b = False
        break

if b:
    print(1)
else:
    print(0)
