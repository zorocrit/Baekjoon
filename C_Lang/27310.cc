#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int main() {
    string inpo;
    cin >> inpo;
    char ch[32];
    int len = inpo.length();
    strcpy(ch, inpo.c_str());
    int sum = 0;
    int col = 0;
    int under = 0;

    for(int i = 0; i < len; i++) {
        if(ch[i] != 0) {
            // cout << ch[i] << " ";
            sum = sum + 1;
        }
    }
    // cout << endl;
    for(int i = 0; i < len; i++) {
        if(ch[i] == ':') {
            col = col + 1;
        }
    }
    for(int i = 0; i < len; i++) {
        if(ch[i] == '_') {
            under = under + 1;
        }
    }
    // cout << sum << " " << col << " " << under;
    cout << sum + col + under * 5;
    return 0;
}