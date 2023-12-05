nn = int(input())

for xx in range(nn):
    aa, bb, zz = map(int, input().split())
    print(aa * (zz - 1) + bb)
