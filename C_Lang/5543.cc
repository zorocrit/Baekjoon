#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int d, e;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    if (a > b) {
        if (b > c) {
            a = c;
        } else {
            a = b;
        }
    } else {
        if (a > c) {
            a = c;
        }
    }
    if (d > e) {
        d = e;
    }
    cout << a + d - 50;
    return 0;
}