#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int cal;
    cin >> cal;
    for(int i = 0; i < cal; i++) {
        int m, n;
        cin >> m >> n;
        long long ans = 1;
        int r = 1;
        for(int k = n; k > n - m; k--) {
            ans *= k;
            ans /= r++;
        }
        cout << ans << "\n";
    }
}