#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
string a, b, c;
int dp [111][111][111];
int as, bs, cs;

void input() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b >> c;
}

void size() {
    as = a.size();
    bs = b.size();
    cs = c.size();
}

void cal() {
    for(int i = 1; i <= as; i++) {
        for(int j = 1; j <= bs; j++) {
            for(int k = 1; k <= cs; k++) {
                if(a[j - 1] == b[i - 1] && a[j - 1] == c[k - 1]) {
                    dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                }
                else {
                    dp[i][j][k] = max({dp[i - 1][j][k], dp[i][j - 1][k], dp[i][j][k - 1]});
                }
            }
        }
    }
}

int main() {
    input();
    size();
    cal();
    cout << dp[as][bs][cs];
    return 0;
}