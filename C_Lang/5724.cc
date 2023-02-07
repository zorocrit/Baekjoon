#include <iostream>
using namespace std;

int main() {
    while(true) {
        int a;
        cin >> a;
        if(a == 0) break;
        int sum = 0;
        for(int i = a; a > 0; a--) {
            sum += a * a;
        }
        cout << sum << endl;
    }
    return 0;
}