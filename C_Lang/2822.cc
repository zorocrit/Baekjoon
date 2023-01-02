#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> dumy;
    vector<int> check;
    for(int i = 0; i < 8; i++) {
        int temp;
        cin >> temp;
        dumy.push_back(temp);
        check.push_back(temp);
    }
    sort(dumy.begin(), dumy.end(), greater<>());
    int sum77 = dumy[0] + dumy[1] + dumy[2] + dumy[3] + dumy[4];
    cout << sum77 << "\n";
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 5; j++) {
            if(check[i] == dumy[j]) {
                cout << i + 1 << " ";
            }
        }
    }

    return 0;
}