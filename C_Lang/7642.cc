#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int M, G, Z, S, E;
int trash[5];
int print;

int cal() {
    int res = -1;
    for(int i = 0; i <= M / 100; i++) {
        for(int j = 0; j <= (M - (100 * i)) / 125; j++) {
            for(int k = 0; k <= (M - (100 * i) - (125 * j)) / 50; k++) {
                if(G - j * 50 - k * 100 < 0 || M - i * 100 - j * 125 - k * 50 < 0) {
                    break;
                }
                else {
                    int sum = i * Z + j * S + k * E;
                    if(sum > res) {
                        //cout << i << " " << j << " " << k << endl;
                        res = sum;
                    }
                }
            }
        }
    }
    
    return res;
}


int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    cin >> M >> G >> Z >> S >> E;
    cin >> trash[0] >> trash[1] >> trash[2] >> trash[3] >> trash[4];
    print = cal();
    //cout << endl;
    cout << print;
    return 0;
}