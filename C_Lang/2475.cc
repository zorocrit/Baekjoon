#include <iostream>
using namespace std;
int main() {
    int a[5];
    for(int x = 0; x < 5; x++) {
        cin >> a[x];
    }
    int k = 0;
    for(int i = 0; i < 5; i++) {
        k = k + a[i]*a[i];
    }
    cout << k%10;
}