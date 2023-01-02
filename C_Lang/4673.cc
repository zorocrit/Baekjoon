#include <iostream>
using namespace std;
int num[10001];
int d(int n) {
    int sum = n;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    for (int i = 1; i <= 10000; i++) {
        num[d(i)] = 1;
        if (num[i] != 1) {
            cout << i << endl;
        }
    }
}