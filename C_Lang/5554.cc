#include <iostream>
using namespace std;

int input(int a) {
    cin >> a;
    return a;
}

int main() {
    int a, b, c, d;
    a = input(a);
    b = input(b);
    c = input(c);
    d = input(d);
    cout << (a + b + c + d) / 60 << endl;
    cout << (a + b + c + d) % 60 << endl;
}