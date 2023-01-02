#include <iostream>
using namespace std;

int num;
int main() {
    ios::sync_with_stdio(false);
    cin >> num;
    int we[51];
    int hi[51];
    int re[51];

    for(int x = 0; x < num; x++) {
        cin >> we[x] >> hi[x];
        re[x] = 1;
    }
    for(int y = 0; y < num; y++) {
        for(int z = 0; z < num; z++) {
            if(we[y] < we[z] && hi[y] < hi[z]) {
                re[y]++;
            }
        }
    }
    for(int k = 0; k < num; k++) {
        cout << re[k] << " ";
    }


}

