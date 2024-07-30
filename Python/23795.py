base = 0
for nn in range(2000):
    alp = int(input())
    if alp == -1:
        break
    else:
        base = base + alp

print(base)
