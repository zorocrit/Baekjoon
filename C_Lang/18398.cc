#include <iostream>
using namespace std;
int t, n, a, b;
int aa[60], bb[60];
int main() {
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> aa[i] >> bb[i];
            cout << aa[i] + bb[i] << " " << aa[i] * bb[i] << "\n";
        }
    }
    return 0;
}