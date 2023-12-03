tt = int(input())
for xx in range(tt):
    nn = int(input())
    while(nn > 0):
        if(nn >= 5):
            nn = nn - 5
            print("++++ ", end = '')
        else:
            for yy in range(nn):
                print("|", end = '')
            nn = 0
    print('')
