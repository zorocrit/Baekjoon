#num = list(map(int, input().split(' ')))
num1 = int(input())
num2 = int(input())
num3 = int(input())
num4 = int(input())
num5 = int(input())

if(num1 <= 40):
    num1 = 40
if(num2 <= 40):
    num2 = 40
if(num3 <= 40):
    num3 = 40
if(num4 <= 40):
    num4 = 40
if(num5 <= 40):
    num5 = 40
sum = num1 + num2 + num3 + num4 + num5
print(int(sum/5))