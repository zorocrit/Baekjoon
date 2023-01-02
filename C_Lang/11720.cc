#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, sum = 0;
    cin >> n;
    char num[100];
    cin >> num;
    for(int i = 0; i < n; i++) {
        sum += num[i] - '0';
    }
    cout << sum;
}