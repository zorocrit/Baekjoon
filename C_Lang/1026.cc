#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int i, int k) {
    return k < i;
}

int main() {
    int num;
    cin >> num;
    vector<int> first(num);
    vector<int> second(num);
    for(int i = 0; i < num; i++) {
        cin >> first[i];
    }
    sort(first.begin(), first.end());
    for(int i = 0; i < num; i++) {
        cin >> second[i];
    }
    sort(second.begin(), second.end(), compare);
    int sum = 0;
    for(int i = 0; i < num; i++) {
        sum += first[i] * second[i];
    }
    cout << sum;
}