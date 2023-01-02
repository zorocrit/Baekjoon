a = int(input())

b = a // 64
a = a % 64
b = b + (a // 32)
a = a % 32
b = b + (a // 16)
a = a % 16
b = b + (a // 8)
a = a % 8
b = b + (a // 4)
a = a % 4
b = b + (a // 2)
a = a % 2
b = b + a
print(b)