a = int(input())
b = 1
c = 0
while (a > 0):
    b = b * a
    a = a - 1

while 1:
    if (b % 10 == 0):
        b = b // 10
        c = c + 1
    else:
        print(c)
        break