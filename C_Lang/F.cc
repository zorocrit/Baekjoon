#include <bits/stdc++.h>

using namespace std;

int S[2010];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int m, n;
    cin >> n >> m;

    for(int i = 1; i <= n; i++) {
        cin >> S[i];
    }

    int sum, a;
    
    for (int i = 1; i <= n; i++) {
        sum=0;
        for (int j=1; j<=n+m; j++) {
            cin >> a;
            S[j] += a;
            sum += a;
        }
        S[i] -= sum;
    }

    for (int i=1; i<=n+m; i++) {
        cout << S[i] << " ";
    }

    return 0;
}