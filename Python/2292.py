import sys
a = int(input())
b = int(2)
c = int(6)
d = int(0)
if(a == 1):
    print("1")
    sys.exit()
elif(a == 2):
    print("2")
    sys.exit()
while(True):
    d = d + 1
    b = b + 6 * d
    if(b > a):
        print(d + 1)
        sys.exit()