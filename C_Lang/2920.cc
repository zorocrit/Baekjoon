#include <iostream>
using namespace std;
int num[8];
int main() {
    for(int i = 0; i < 8; i++) {
        cin >> num[i];
    }
    int check = 0;
    for(int i = 0; i < 8; i++) {
        if(num[i] == i + 1) {
            check++;
        }
        else break;
    }
    if(check == 8) {
        cout << "ascending";
        return 0;
    }
    check = 0;
    for(int i = 0; i < 8; i++) {
        if(num[i] == 8 - i) {
            check++;
        }
        else break;
    }
    if(check == 8) {
        cout << "descending";
    }
    else cout << "mixed";
    return 0;
}