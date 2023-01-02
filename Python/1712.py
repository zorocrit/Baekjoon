import sys

num = list(map(int, input().split(' ')))
if(num[1] >= num[2]):
    print("-1")
    sys.exit()
profit = int(num[2] - num[1])
end = int(num[0]/profit) + 1
print(end)