size = int(input())

arr = [0] * size

arr[0] = list(map(int, input().split()))

for xx in range(1, size):
    arr[xx] = list(map(int, input().split()))
    for yy in range(xx + 1):
        if yy == 0:
            arr[xx][yy] = arr[xx][yy] + arr[xx - 1][yy]
        elif yy == xx:
            arr[xx][yy] = arr[xx][yy] + arr[xx - 1][yy - 1]
        else:
            arr[xx][yy] = arr[xx][yy] + max(arr[xx - 1][yy - 1], arr[xx - 1][yy])

print(max(arr[size - 1]))
