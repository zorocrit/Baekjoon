#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int num;
    cin >> num;
    int size = 0;
    vector<int> rope(num);
    vector<int> height(num);
    for(int i = 0; i < num; i++) {
        cin >> rope[i];
        size += (i + 1);
    }
    sort(rope.begin(), rope.end());
    for(int i = 0; i < num; i++) {
        height[i] = rope[i] * (num - i);
        //cout << height[i] << " ";
    }
    //cout << endl;
    int max77 = 0;
    for(int i = 0; i < num; i++) {
        max77 = max(max77, height[i]); 
    }
    cout << max77;
}