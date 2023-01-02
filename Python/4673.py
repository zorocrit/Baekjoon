num1 = set(range(1, 10001))
num2 = set()
for x in range(1, 10001):
    p = 0
    p = x
    for y in str(x):
        p += int(y)
    num2.add(p)

num3 = sorted(num1 - num2)
for z in num3:
    print(z)