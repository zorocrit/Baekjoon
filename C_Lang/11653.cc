#include <iostream>
using namespace std;
int input;
int main() {
    cin >> input;
    int dif = 2;
    while(true) {
        if(input % dif == 0) {
            input = input / dif;
            cout << dif << "\n";
        }
        else {
            dif++;
        }
        if(dif > input) {
            break;
        }
    }
    return 0;
}