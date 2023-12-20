import math

sta = int(input())

# sqrt 써서 제곱근 구하기

for x in range(sta):
    aa, bb = map(int, input().split())
    tt = bb - aa
    if(tt == 1):
        print(1)
    elif(tt == 2):
        print(2)
    elif(tt == 3 or tt == 4):
        print(3)
    else:
        pp = math.sqrt(tt)
        
        ipp = int(pp)
        if(pp - ipp == 0.0):
            print(ipp * 2 - 1)
        else:
            zpp = (((ipp + 1)*(ipp + 1)) + ipp ** 2)/2
            hpp = ipp * 2
)
            if(tt <= zpp):
                print(hpp)
            else:
                print(hpp + 1)
