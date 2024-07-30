a, b, c = map(int, input().split())

if a == 0:
    a = c * c - b
    print(a)
elif b == 0:
    b = c * c - a
    print(b)
else:
    c = (a + b)**(1/2)
    print(int(c))
