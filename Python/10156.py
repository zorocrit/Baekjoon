a, b, c = map(int, input().split(' '))
num = a * b
if(num >= c):
    print(num - c)
else:
    print("0")