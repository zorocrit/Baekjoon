#include <iostream>
using namespace std;

int num[36];
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        num[temp]++;
    }
    int check = 0;
    int sum = 0;
    for(int i = 1; i <= 35; i++) {
        if(num[i] == 0) {
            check = 1;
        }
        else {
            if(check == 1) {
                sum = sum + i;
                check = 0;
            }
        }
    }
    cout << sum;
    return 0;
}