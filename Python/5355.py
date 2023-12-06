nn = int(input())

for x in range(nn):
    mai = list(map(str, input().split()))
    # print(mai[0])
    # print(mai[1])
    cou = len(mai)
    aka = float(mai[0])
    for xxs in range(1, cou):
        if(mai[xxs] == "@"):
            aka = aka * 3
        elif(mai[xxs] == "%"):
            aka = aka + 5
        elif(mai[xxs] == "#"):
            aka = aka - 7
    print("{:.2f}".format(aka))
