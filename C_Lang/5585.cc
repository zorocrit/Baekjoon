#include <iostream>
using namespace std;
int num, money = 1000;
int a, b, c, d, e, f;
int main() {
    cin >> num;
    money = money - num;
    a = money/500;
    money = money - a*500;
    b = money/100;
    money = money - b*100;
    c = money/50;
    money = money - c*50;
    d = money/10;
    money = money - d*10;
    e = money/5;
    money = money - e*5;
    f = money/1;
    money = money - f*1;
    cout << a + b + c + d + e + f;
    return 0;
}