#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
unsigned long long power(int a, int n, int c);
int main() {
    int a, b, c;

    cin >> a >> b >> c;
    unsigned long long num;
    num = power(a, b, c);
    //cout << num << endl;
    long long add = num % c;
    cout << add;
}

unsigned long long power(int a, int n, int c) {
    if(n == 0) return 1;
    if(n % 2 == 0) {
        unsigned long long half = power(a, n/2, c);
        return half * half % c;
    }
    else return ((a % c) * (power(a, n - 1, c) % c)) % c;
}