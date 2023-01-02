a = int(input())
for x in range(a):
    b, c = map(int, input().split())
    bb = b%10
    if(bb == 1):
        print(bb)
    elif(bb == 0):
        print(10)
    elif(bb == 5):
        print(bb)
    elif(bb == 6):
        print(bb)
    elif bb in [4, 9]:
        cc = c%2
        if(cc == 0):
            print(bb*bb%10)
        else:
            print(bb)
    else:
        cc = c%4
        if(cc == 0):
            print(bb**4%10)
        else:
            print(bb**cc%10)