#include <iostream>
using namespace std;
int count = 0;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int E, S, M;
    cin >> E >> S >> M;
    
    while(true) {
        count++;
        if((count-E) % 15 == 0 && (count-S) % 28 == 0 && (count-M) % 19 == 0) {
            cout << count;
            return 0;
        }
    }
    
}