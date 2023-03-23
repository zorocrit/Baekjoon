a, b = map(int, input().split())

c = a // 2

d = c - b

if(d < 0):
    d = 0

print(c - d)