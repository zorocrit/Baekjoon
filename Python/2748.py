t = int(input()) #testcase가 얼마인지

for i in range(t):  #testcase만큼 반복해줄겁니다
    floor = int(input()) #층
    num = int(input()) #호
    f0 = [x for x in range(1, num+1)] #3호실 까지 만들도록
    for k in range(floor):
        for i in range(1, num):
            f0[i] += f0[i-1]
    print(f0[-1])