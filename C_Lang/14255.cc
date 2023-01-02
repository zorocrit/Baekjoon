#include <bits/stdc++.h>
#include <bitset>
using namespace std;
using ll = long long;

int num;
int check[2000001];
int seq[21];

void solve(int x, int sum)
{
	check[sum] = true;
	if (x == num) return;
	else{
		solve(x + 1, sum);
		solve(x + 1, sum + seq[x]);
	}
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> num;
    vector<int> v(num);
    for(int i = 0; i < num; i++) {
        cin >> seq[i];
    }
    //int check = 1;
    solve(0, 0);
    int j = 1;
	while (check[j] == true) j++;
	cout << j;
}