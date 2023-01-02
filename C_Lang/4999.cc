#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main() {
    string s;
    string s2;
    cin >> s;
    cin >> s2;
    if (s.length() < s2.length()) {
        cout << "no" << endl;
    } else {
        int check = 0;
        for (int x = 0; x < s.length(); x++) {
            if (s[x] == s2[check]) {
                check++;
            }
            if (check == s2.length()) {
                cout << "go" << endl;
                return 0;
            }
        }
        cout << "no" << endl;
    }
}