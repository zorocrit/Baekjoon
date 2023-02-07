#include <iostream>
using namespace std;
int n;
int a[200010];
int main() {
    cin >> n;
    for(int i = 0; i <= 200007; i++) {
        a[i] = 0;
    }
    for(int i = 0; i < n; i++) {
        int aa, bb;
        cin >> aa >> bb;
        if(bb == 1) a[aa]++;
        if(bb == 0) a[aa]--;
    }
    int sum = 0;
    for(int i = 0; i <= 200007; i++) {
        if(a[i] > 0) {
            sum += a[i];
        }
        else if(a[i] < 0) {
            sum -= a[i];
        }
    }
    cout << sum;
    return 0;
}