#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int e = min(a, b);
    int f = min(c - a, d - b);
    int g = min(e, f);
    cout << g;
}