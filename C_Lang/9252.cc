#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
int dp[1011][1011];
string a, b;
string ed;

void cal() {
    for(int i = 1; i <= b.size(); i++) {
        for(int j = 1; j <= a.size(); j++) {
            if(a[j - 1] == b[i - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    cout << dp[b.size()][a.size()] << endl;
}

void input() {
    cin >> a >> b;
    cal();
}

void pr() {
    reverse(ed.begin(), ed.end());
    for(int i = 0; i <ed.size(); i++) {
        cout << ed[i];
    }
    cout << endl;
}

void cal2() {
    int k = a.size();
    for (int i = b.size(); i >= 0; i--) {
		if (dp[i][k] == 0)
			break;
		for (int j = k; j >= 0; j--) {
			if (dp[i][j] == dp[i - 1][j])
				break;
			if (dp[i][j] != dp[i][j - 1]) {
				ed += a[j-1];
				k = j - 1;
				break;
			}
		}
	}
    pr();
}

int main() {
    input();
    if(dp[b.size()][a.size()] == 0) {
        return 0;
    }
    else {
        cal2();
        return 0;
    }
}