#include <iostream>
using namespace std;


int A, B, V;
int main() {
    ios::sync_with_stdio(false);
    cin >> A >> B >> V;
    /*int day = 0;
    int sum = 0;
    while(true) {
        day++;
        sum += A;
        if(sum >= V) {
            cout << day;
            return 0;
        }
        sum-= B;
    }*/
    int day = (V - A)/(A - B) + 1;
    if((V - A)%(A - B) != 0) {
        day++;
    }
    cout << day;
}