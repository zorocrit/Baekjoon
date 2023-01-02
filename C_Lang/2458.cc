#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define INF 987654321
int n, m;
int fin = 0;
int f[501], s[501];
bool ball[501][501];
int main() {
    cin.tie(NULL); cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for(int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;
        ball[a][b] = true;
    }
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (ball[i][k] && ball[k][j]) {
                    ball[i][j] = true;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        for (int j = 1; j <= n; j++) {
            if (ball[i][j] || ball[j][i]) cnt++;
        }

        if (cnt == n - 1) fin++;
    }
    cout << fin << '\n';
    return 0;
}