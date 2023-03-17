#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string n;
    stack <char> s;
    cin >> n;
    int cnt = 0;

    for(int i = 0; i < n.size(); i++) {
        if(n[i] == '(') {
            s.push(n[i]);
        } else {
            s.pop();
            if(n[i-1] == '(') {
                cnt += s.size();
            } else {
                cnt += 1;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}