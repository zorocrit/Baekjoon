#include <iostream>
using namespace std;

//baekjoon 10250
int main() {
    int t, h, w, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> h >> w >> n;
        int floor = n % h;
        int room = n / h + 1;
        if (floor == 0) {
            floor = h;
            room--;
        }
        cout << floor * 100 + room << endl;
    }
}