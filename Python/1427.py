a = input()
b = list(a)
c = map(int, b)
c = sorted(c, reverse = True)
for x in range(len(c)):
    print(c[x], end = '')