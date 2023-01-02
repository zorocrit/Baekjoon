#include <iostream>
#include <cmath>
using namespace std;
long long n, k, m, mod, org;
long long arr[2011][2011];
long long count = 0;
long long count7 = 0;
long long co;
int result = 1;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    cin >> n >> k >> m;
    for(int i=0; i<m; i++){
        arr[i][0] = 1;
        for(int j=1; j<=i; j++)
            arr[i][j] = (arr[i-1][j-1] + arr[i-1][j])%m;
    } 
    while(n || k){
        result *= arr[n%m][k%m];
        n /= m;
        k /= m;
        result %= m;
    }
    cout << result;
}
