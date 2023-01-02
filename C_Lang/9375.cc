#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
int m, n;
map<string, int> maping;

void input() {
    cin >> m;
}

void cal() {
    string a, b;
    cin >> a >> b;
    if(maping.find(b) == maping.end()) {
        maping.insert({b, 1});
    }
    else {
        maping[b]++;
    }
}

void test_case() {
    maping.erase(maping.begin(), maping.end());
    cin >> n;
    for(int k = 0; k < n; k++) {
        cal();
    }
    int outp = 1;
    for(auto i : maping) {
        outp *= (i.second + 1);
    }
    outp = outp - 1;
    cout << outp << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    input();
    for(int i = 0; i < m; i++) {
        test_case();
    }
    return 0;
}