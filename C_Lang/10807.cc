#include <iostream>
using namespace std;
int plusI[101];
int minusI[101];
int num, dumy;

int main() {
    cin >> num;
    for(int i = 0; i < num; i++) {
        cin >> dumy;
        if(dumy >= 0) {
            plusI[dumy]++;
        }
        else {
            minusI[dumy * (-1)]++;
        }
    }
    cin >> dumy;
    if(dumy >= 0) {
        cout << plusI[dumy];
    }
    else {
        cout << minusI[dumy * (-1)];
    }
    return 0;
}