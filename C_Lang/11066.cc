#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
#define INF 1e9
int dp[501][501];
int sum[501];
int n;
int sol(int l, int r) {
    int& ret = dp[l][r];
    if(ret!= -1) return ret;
    if(l==r) return ret = 0;

    ret = INF;
    for(int k = l; k < r; k++) {
        ret = min((sol(l, k) + sol(k + 1, r) + sum[r] - sum[l-1]), ret);
    }
    return ret;
}

int cal(int a) {
    memset(sum, 0, sizeof(sum));
    sum[0] = 0;
    vector<int> inpN;
    for(int i = 0; i < a; i++) {
        int k;
        cin >> k;
        inpN.push_back(k);
        if(i == 0) {
            sum[0] = inpN[i];
            //cout << sum[0];
        }
        else {
            sum[i] = sum[i - 1] + inpN[i];
            //cout << sum[i];
        }
    }
    memset(dp, -1, sizeof(dp));
    int p = sol(0, a - 1);
    cout << p << endl;
    return 0;
}

int input() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        cal(t);
    }
    return 0;
}


int main() {
    input();
    return 0;
}