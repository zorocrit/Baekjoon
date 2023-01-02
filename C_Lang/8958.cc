#include <iostream>
#include <string>
using namespace std;
int OX(string& s) {
	int cumulative = 0;
	int sum = 0;
	for(char &v : s) {
		if(v == 'O') {
			cumulative++;
			sum += cumulative;
		}
		else {
			cumulative = 0;
		}
	}
	return sum;
}

int main(int argc, const char * argv[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);
    cout.tie(nullptr);
	int T;
	cin >> T;
	for(int i = 0; i < T; i++) {
		string s;
		cin >> s;
		cout << OX(s) << "\n";
	}
	return 0;
}