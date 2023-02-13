#include <iostream>
using namespace std;

int main() {
    int n;
    int a, b, c;
    cin >> n;
    cin >> a >> b >> c;
    int sum = 0;
    int am = n - a;
    int bm = n - b;
    int cm = n - c;
    if(am >= 0) {
        sum = sum + a;
    }
    else {
        sum = sum + n;
    }
    if(bm >= 0) {
        sum = sum + b;
    }
    else {
        sum = sum + n;
    }
    if(cm >= 0) {
        sum = sum + c;
    }
    else {
        sum = sum + n;
    }
    cout << sum;
    return 0;
}