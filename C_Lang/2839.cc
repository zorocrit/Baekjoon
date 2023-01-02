#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if(num % 5 == 0) {
        cout << num/5;
        return 0;
    }
    else {
        for(int x = 0; x < num/5; x++) {
            int a, b;
            if((num-x*5)/3 == 0) {
                cout << x + (num-x*5)/3;
                return 0;
            }
        }
    }
    cout << "-1";
    return 0;
};