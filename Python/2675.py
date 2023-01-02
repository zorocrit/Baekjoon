num = int(input())

for x in range(num):
    inp = input()
    llis = inp.split(' ')
    nunm = int(llis[0])
    lis = list(llis[1])
    for b in range(len(lis)):
        for a in range(nunm):
            print(lis[b], end='')
    print(end='\n')