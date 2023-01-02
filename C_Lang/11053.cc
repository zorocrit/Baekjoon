#include <iostream>
#include <algorithm>
using namespace std;

int num, input[1100], check[1100], maxNum, sum = 0;
int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    cin >> num;
    for(int i = 0; i < num; i++) {
        cin >> input[i];
        maxNum = 0;
        for(int j = 0; j < i; j++) {
            if(input[i] > input[j]) {
                maxNum = max(maxNum, check[j]);
            }
        }
        input[i] = maxNum + 1;
        sum = max(sum, input[i]);
    }
    cout << sum;
    return 0;
}