#include <iostream>
#include <stack>
using namespace std;

int num;
int input[100001];
int sum = 0;
int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    cin >> num;
    stack<int> s;
    for(int i = 0; i < num; i++) {
        cin >> input[i];
        if(input[i] == 0) {
            s.pop();
        }
        else {
            s.push(input[i]);
        }
    }
    while(true) {
        if(s.size() != 0) {
            sum = sum + s.top();
            s.pop();
        }
        else {
            break;
        }
    }
    cout << sum;
}