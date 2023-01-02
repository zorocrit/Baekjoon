#include <iostream>
using namespace std;

long long input;
long long sum = 0;
long long plusNum = 0;

int main() {
    cin >> input;
    while(true) {
        if(sum < input) {
            if(input - sum > plusNum) {
                plusNum++;
                sum = sum + plusNum;
            }
            else {
                cout << plusNum << "\n";
                break;
            }
        }
        else {
            cout << plusNum << "\n";
            break;
        }
    }
    return 0;
}