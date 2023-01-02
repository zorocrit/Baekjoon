#include <iostream>
using namespace std;
long long int a, b, c;


int main() {
    cin >> a >> b;
    c = a - b;
    if(c < 0) {
        cout << c * (-1);
    }
    else {
        cout << c;
    }
    return 0;
}