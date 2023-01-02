#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n;
int a[5001];
int dp[5001];

int input() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    return 0;
}

int cal() {
    for(int i = 0; i < n; i++) {
        dp[i] = 1;
        for(int j = 0; j < i; j++) {
            if(a[j] < a[i]) {
                dp[i] = dp[i] + dp[j];
                dp[i] = dp[i] % 998244353;
            }
        }
    }
    return 0;
}
int print() {
    for(int i = 0; i < n; i++) {
        cout << dp[i] << " ";
    }
    return 0;
}
int main() {
    input();
    cal();
    print();
    return 0;
}