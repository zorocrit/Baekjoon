#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define INF 987654321;
int n, p, h;
int DP[200][200];
int main() {
    cin >> n;
    vector<int> f, s;
    f.push_back(0);
    s.push_back(0);
    for(int i = 0; i < n; i++) {
        int dum;
        cin >> dum;
        f.push_back(dum);
    }
    for(int i = 0; i < n; i++) {
        int dum;
        cin >> dum;
        s.push_back(dum);
    }
    p = 100;
    for(int k = 1; k <= n; k++) {
        for(int w = 1; w <= p; w++) {
            if(w - f[k] >= 0) {
                DP[k][w] = max(DP[k - 1][w], DP[k - 1][w - f[k]] + s[k]);
            }
            else {
                DP[k][w] = DP[k - 1][w];
            }
        }
    }
    cout << DP[n][99];
}