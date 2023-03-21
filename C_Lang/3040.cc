#include <iostream>
using namespace std;

int main() {
    int arr[9];
    int sum = 0;
    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    int a, b;
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - arr[i] - arr[j] == 100) {
                a = i;
                b = j;
                break;
            }
        }
    }
    for (int i = 0; i < 9; i++) {
        if (i == a || i == b) {
            continue;
        }
        else {
            cout << arr[i] << endl;
        }
    }
    return 0;
}