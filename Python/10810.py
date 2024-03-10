
n, m = map(int, input().split())

n_size = [0] * (n + 1)

for x in range(m):
    i, j, k = map(int, input().split())
    for y in range(i, j + 1):
        n_size[y] = k

for x in range(1, n + 1):
    print(int(n_size[x]), end = " ")

'''
//문제를 잘못 이해했던 흔적
n_size = np.zeros((n + 1, n + 1))

for x in range(m):
    i, j, k = map(int, input().split())
    for y in range(i, j + 1):
        if(n_size[y][k] == 0):
            n_size[y][k] = 1
        else:
            n_size[y][k] = 0


n_tot = np.zeros(n)

for x in range(n):
    for y in range(n):
        if(n_size[x + 1][y + 1] != 0):
            n_tot[x] = n_tot[x] + 1
            

for x in range(n):
    print(n_tot[x], end = " ")
'''
