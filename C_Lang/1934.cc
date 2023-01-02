#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int TestCase = 0;
    cin >> TestCase;
    int num1, num2;
    for(int x = 0; x < TestCase; x++) {
        cin >> num1 >> num2;
        while(true) {
            bool ExitLoop = false;
            for(int y = max(num1, num2); y <= 45000; y++) {
                if(y%num1 == 0 && y%num2 == 0) {
                    cout << y << "\n";
                    ExitLoop = true;
                    break;
                }
            }
            if(ExitLoop == true) {
                break;
            }
        }
    }
}