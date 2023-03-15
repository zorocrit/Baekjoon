#include <iostream>
using namespace std;

int main() {
    int n[20];
    int sum = 0;
    int biggist = 0;
    int a, b;
    cin >> a >> b;
    sum = b;
    cin >> a >> b;
    sum -= a;
    sum += b;
    biggist = sum;
    cin >> a >> b;
    sum -= a;
    sum += b;
    if(sum > biggist) {
        biggist = sum;
    }
    cin >> a >> b;
    sum -= a;
    sum += b;
    if(sum > biggist) {
        biggist = sum;
    }
    if(biggist <= 10000) {
        cout << biggist << endl;
    }
    else {
        cout << 10000 << endl;
    }
    return 0;
}