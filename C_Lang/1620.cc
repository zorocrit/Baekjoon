#include <iostream>
#include <vector>
#include <map>
#include <cstring>
#include <algorithm>
using namespace std;
map<string, int> poke;
int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    vector<string> pokemon;
    int m, n;
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        string str;
        cin >> str;
        pokemon.push_back(str);
        poke[str] = i;
    }
    for(int i = 0; i < n; i++) {
        string str;
        int in;
        cin >> str;
        if(isdigit(str[0]) == true) {
            in = stoi(str);
            cout << pokemon[in - 1] << '\n';
        }
        else {
            cout << poke[str] + 1 << '\n';
        }
    }
    return 0;
}