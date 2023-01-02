num = int(input())

d = [0] * 100
d[0] = 4
d[1] = 6

for i in range(2, num + 1):
    d[i] = d[i-1] + d[i-2]

print(d[num-1])