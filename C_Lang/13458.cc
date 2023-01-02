#include <iostream>
using namespace std;

int n, b, c;
int a[1000000];

void input() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> b >> c;
    return;
}


int main() {
    input();
    long long ans = 0;
    for(int i = 0; i < n; i++) {
        a[i] -= b;
        ans++;
        if(a[i] > 0) {
            ans += a[i] / c;
            if(a[i] % c != 0) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}