#include <iostream>
using namespace std;

int main() {
    int n;
    while(true){
        cin >> n;
        if(n==0) {
            return 0;
        }
        else {
            if(n < 10) {
                cout << "yes" << endl;
            }
            else if(n < 100) {
                if(n % 10 == n / 10) {
                    cout << "yes" << endl;
                }
                else {
                    cout << "no" << endl;
                }
            }
            else if(n < 1000) {
                if(n % 10 == n / 100) {
                    cout << "yes" << endl;
                }
                else {
                    cout << "no" << endl;
                }
            }
            else if(n < 10000) {
                if(n % 10 == n / 1000 && (n / 10) % 10 == (n / 100) % 10) {
                    cout << "yes" << endl;
                }
                else {
                    cout << "no" << endl;
                }
            }
            else if(n < 100000) {
                if(n % 10 == n / 10000 && (n / 10) % 10 == (n / 1000) % 10) {
                    cout << "yes" << endl;
                }
                else {
                    cout << "no" << endl;
                }
            }
        }
    }
}