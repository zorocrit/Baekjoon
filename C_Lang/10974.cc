#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()  {
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int num;
    cin >> num;
    vector<int> arr(num);
    for(int i = 0; i < num; i++) {
        arr[i] = i + 1;
    }
    do {
		for (auto p : arr)
			cout << p << ' ';
		cout << '\n';
	} while (next_permutation(arr.begin(), arr.end()));
}