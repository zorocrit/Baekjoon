#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int num[50];
    int min7 = 1000001;
    int max7 = -1;
    for (int i = 0; i < a; i++) {
        int temp;
        cin >> temp;
        num[i] = temp;
        if(temp < min7) {
            min7 = temp;
        }
        if(temp > max7) {
            max7 = temp;
        }
    }
    cout << min7 * max7;
    return 0;
}