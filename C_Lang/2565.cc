#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct line{
    int left;
    int right;
};

int n;
int dp[101];
line l[101];


int input() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> l[i].left >> l[i].right;
    }
    return 0;
}
bool cmp(line a, line b) {
    if(a.left < b.left) return true;
    else return false;
}

int cal() {
    int core = 0;
    sort(l, l + n, cmp);
    for(int i = 0; i < n; i++) {
        dp[i] = 1;
        for(int j = 0; j < i; j++) {
            if(l[i].right > l[j].right) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        core = max(core, dp[i]);
    }
    cout << n - core;
    return 0;
}

int main() {
    input();
    cal();
    return 0;
}