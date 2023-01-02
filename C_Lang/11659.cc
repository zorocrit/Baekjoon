#include <iostream>
#include <vector>
using namespace std;
int m, n, i, j;
int sum[100001];
int main() {
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    cin >> m >> n;
    for(int a = 1; a <= m; a++) {
        int temp;
        cin >> temp;
        if(a == 1) {
            sum[1] = temp;
        }
        else {
            sum[a] = sum[a-1] + temp;
        }
    }
    for(int a = 0; a < n; a++) {
        cin >> i >> j;
        cout << sum[j] - sum[i - 1] << "\n";
    }
    return 0;
}