#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    unsigned long long int m;
    cin >> n >> m;
    unsigned long long int bufi;
    unsigned long long int gutnulbi;
    bufi = (pow(pow(n, m), 3)) * pow((0.5),m);
    cout << bufi;
    return 0;
}