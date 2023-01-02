#include <iostream>
#include <algorithm>

using namespace std;


int min(int a, int b) {
    int sum = a - b;
    if(a > b) {
        return sum;
    }
    else if(b > a) {
        return sum * (-1);
    }
    else {
        return 0;
    }
}

int cal(int arr[], int max) {
    int should = max - 1;
    int sum = 0;
    for(int x = 0; x < should; x++) {
        sum = sum + min(arr[x], arr[x + 1]);
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int num;
    cin >> num;
    int arr[8];
    int x;
    for(x = 0; x < num; x++) {
        cin >> arr[x];
    }
    sort(arr, arr + x);
    int max = 0;
    do {
        //cout << cal(arr, x) << '\n';
        if(cal(arr, x) > max) {
            max = cal(arr, x);
        }
    } while ( std::next_permutation(arr,arr+x));
    cout << max;
}