#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
long long N;
int d;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> d;
    vector<int> v(d);
    for(int i = 0; i < d; i++) {
        v[i] = i;
    }
    do
	{
        int temp = 0;
		if (v[0] != 0) {
			for (int i = d - 1; i >= 0; i--) {
				temp += ((int)pow(d, i) * v[(d - 1) - i]);
			}
			if (temp > N) {
				cout << temp;
				return 0;
			}
		}
	}while(next_permutation(v.begin(),v.end()));
    cout << "-1";
    return 0;
}