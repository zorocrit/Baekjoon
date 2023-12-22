from collections import deque
from sys import stdin
from sys import stdout

nn, mm, rr = map(int, stdin.readline().split())

arrr = [[] for xx in range(nn + 1)]
# li = []
# for i in range(mm):
#     li.append(list(map(int, stdin.readline().split())))

for ii in range(mm):
    ll = list(map(int, stdin.readline().split()))
    arrr[ll[0]].append(ll[1])
    if(arrr[ll[1]] != rr):
        arrr[ll[1]].append(ll[0])
    
for ii in range(1, nn + 1):
    # for ix in arrr[ii]:
    #     if(ix == rr):
    #         arrr[ii].remove(ix)
    #         break
    arrr[ii].sort()
    
    
def bfs(arr, r, check):
    check[r] = 1    #0번 배제하고 계산, 1~nn까지
    que = deque([r])
    count = 2
    while que:
        r = que.popleft()
        for ir in arr[r]:
            if(check[ir] == 0):
                que.append(ir)
                check[ir] = count
                count = count + 1
        
    
    
checker = [0] * (nn + 1)

bfs(arrr, rr, checker)


z = ""
for i in checker[1::]:
    z += (str(i) + '\n')

stdout.write(z)
