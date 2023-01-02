#include <iostream>
#include <algorithm>
using namespace std;


int binarySearch(int arr[], int size, int value) {
    int left = 0;
    int right = size - 1;
    while(left <= right) {
        int mid = (left + right) / 2;
        if(value < arr[mid]) {
            right = mid -1;
        }
        else if(value > arr[mid]) {
            left = mid + 1;
        }
        else {
            return mid;
        }
    }
    return -1;
}


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    int arr[100000];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >>arr[i];
    }
    sort(arr, arr + n);
    int m;
    cin >> m;
    for(int i = 0; i < m; i++) {
        int value;
        cin >> value;
        if(binarySearch(arr, n, value) == -1) {
            cout << "0\n";
        }
        else cout << "1\n";
    }
    return 0;
}