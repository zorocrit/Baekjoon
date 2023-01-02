#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool check(string str);


int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int num;
    cin >> num;

    for(int i = 0; i < num; i++) {
        string str;
        cin >> str;
        if(check(str)) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
        cout << endl;
        
    }
    return 0;
}

bool check(string str) {
    int a = (int)str.length();
    stack<char> ch;

    for(int i = 0; i < a; i++) {
        char b = str[i];

        if(b == '(') {
            ch.push(str[i]);
        }
        else {
            if(!ch.empty()) {
                ch.pop();
            }
            else {
                return false;
            }
        }
    }

    return ch.empty();
}