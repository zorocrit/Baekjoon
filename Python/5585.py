a = int(input())
b = 1000 - a
count = 0
count += b // 500
b %= 500
count += b // 100
b %= 100
count += b // 50
b %= 50
count += b // 10
b %= 10
count += b // 5
b %= 5
count += b // 1
b %= 1
print(count)