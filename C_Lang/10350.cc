#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> vec;
long long int num;
long long int ex;

void input() {
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    cin >> num;
    for(int i = 0; i < num; i++) {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
}

int main() {
    vec.push_back(0);
    input();
    long long int sum = 0;
    for(int i = 1; i <= num; i++) {
        sum = vec[i] + sum;
        vec.push_back(vec[i]);
    }
    for(int i = 1; i <= num; i++) {
        long long int t = 0;
        for(int j = i; j < i + num; j++) {
            t = t + vec[j];
            if(t < 0) {
                long long int k = t*(-1);
                ex += (k - 1)/sum + 1;
            }
        }
    }
    cout << ex;
}