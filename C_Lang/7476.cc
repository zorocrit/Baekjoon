#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
int al, bl, ans;
long long aa[550], bb[550], dp[550][550];
vector<long long> ed;
vector<long long> e2;
void input() {
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    cin >> al;
    for(int a = 0; a < al; a++) {
        cin >> aa[a];
    }
    cin >> bl;
    for(int b = 0; b < bl; b++) {
        cin >> bb[b];
    }
}

void cal() {
    memset(dp, 0, sizeof(dp));
    for(int j = 1; j <= al; j++) {
        for(int i = 1; i <= bl; i++) {
            if(aa[j - 1] == bb[i - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                //cout << i << " " << j << " " << dp[i][j] << endl;
            }
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
}

void cal2() {
    int k = al;
    for (int i = bl; i >= 0; i--) {
		if (dp[i][k] == 0)
			break;
		for (int j = k; j >= 0; j--) {
			if (dp[i][j] == dp[i - 1][j])
				break;
			if (dp[i][j] != dp[i][j - 1]) {
				ed.push_back(aa[j-1]);
				k = j - 1;
				break;
			}
		}
	}
}

int dp7[1001];

void mim() {
    dp7[1] = 1;
    for (int i = 2; i <= ed.size(); i++) {
        int val = 0;
        for (int j = 1; j < i; j++) {
            if (ed[j] < ed[i]) {
                if (val < dp7[j]) val = dp7[j];
            }
        }
        dp7[i] = val + 1;
    }
    for (int i = 1; i <= ed.size(); i++) {
        if (ans < dp7[i]) ans = dp7[i];
    }
    cout << ans << endl;
}

void ch() {
    int kt = ans;
    int t = 0;
    while(kt) {
        if(dp7[t] != dp7[t + 1]) {
            e2.push_back(ed[t]);
            kt--;
        }
        else {
            t++;
        }
    }
}

void pr() {
    reverse(ed.begin(), ed.end());
    for(int i = 0; i <ed.size(); i++) {
        cout << ed[i] << " ";
    }
    cout << endl;
}

int main() {
    input();
    cal();
    cal2();
    mim();
    ch();
    pr();
}