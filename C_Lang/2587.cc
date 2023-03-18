#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[5];
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    int sum = a[0] + a[1] + a[2] + a[3] + a[4];
    int avg = sum / 5;
    sort(a, a + 5);
    int mid = a[2];
    cout << avg << endl;
    cout << mid << endl;
    return 0;
} 