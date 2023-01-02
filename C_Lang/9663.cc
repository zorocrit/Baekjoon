#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;
int N, ans;
vector<pair<int, int>> queen;

void solve(int r);
bool is_valid(int r, int c);

void solve(int r) {
    if(r == N) {
        ans++;
        return;
    } //base case

    for(int c = 0; c < N; ++c) {
        if(!is_valid(r, c)) continue;
        queen.push_back({r, c});
        solve(r + 1);
        queen.pop_back();
    }
}

bool is_valid(int r, int c) {
    for(int i = 0; i < int(queen.size()); ++i) {
        int nr = queen[i].first, nc = queen[i].second;
        if(nr == r|| nc == c) return false;
        if(nr + nc == r + c || nr - nc == r - c) return false;
    }
    return true;
}

int main() {
    cin >> N;
    int r = 0;
    while(true) {
        solve(r);
        cout << ans;
        return 0;
    }
}