#include <iostream>
using namespace std;

int testCase;
int numStudent;
int students[100001];
int calStu[100001];

int main() {
    ios::sync_with_stdio(false);
    cin >> testCase;
    for(int iter = 0; iter < testCase; iter++) {
        students[100001] = {0, };
        calStu[100001] = {0, };
        cin >> numStudent;
        for(int rev = 0; rev < numStudent; rev++) {
            cin >> students[rev];
            if(students[rev] == rev) {
                calStu[rev] = 2;
            }
        }
        
    }
}