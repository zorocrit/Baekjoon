//Baekjoon 30876

#include <iostream>
using namespace std;

int main() {
    int nn;
    cin >> nn;
    // cout << "as " << nn;
    int a = 0, b = 1001;
    
    
    for (int i = 0; i < nn; i++) {
        int ka, kb;
        cin >> ka >> kb;
        // cout << "tatak " << ka << kb;
        if(b > kb) {
            b = kb;
            a = ka;
        }
    }
    
    cout << a << " " << b;
    return 0;
}
