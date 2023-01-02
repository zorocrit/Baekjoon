#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
int num, wr, temp;
int min77 = 987654321;
vector<int> arr;
vector<int> yum;
int kt;
string straw;
int abl, acl;

void input() {
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    cin >> num;
    cin >> wr;
    int check = 0;
    for(int i = 0; i < wr; i++) {
        cin >> temp;
        arr.push_back(temp);
        check++;
    }
    for(int i = 0; i < 10; i++) {
        int temp = 0;
        for(int j = 0; j < check; j++) {
            if(arr[j] != i) {
                temp++;
            }
            else {
                break;
            }
        }
        if(temp == check) {
            yum.push_back(i);
        }
    }
}

void cal() {
    min77 = num - 100;
    if(min77 < 0) {
        min77 = min77 * (-1);
    }
    for(int i = 0; i <= 999999; i++) {
        straw = to_string(i);
        int arr[6] = {-6, -5, -4, -3, -2, -1};
        for(int j = 0; j < straw.size(); j++) {
            for(int k = 0; k < yum.size(); k++) {
                if(straw[j] - '0' == yum[k]) {
                    arr[j] = 1;
                }
            }
        }
        int checker = 0;
        for(int t = 0; t < straw.size(); t++) {
            if(arr[t] < 0) {
                checker = 1;
                break;
            }
        }
        if(checker == 0) {
            //cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5]; 
            kt = num - i;
            if(kt < 0) {
                kt = kt * (-1);
            }
            int temp = straw.size() + kt;
            if(min77 > temp) {
                abl = straw.size() ;
                acl = kt;
                min77 = temp;
            }
        }
    }
}

int main()  {
    input();
    cal();
    cout << min77;
    return 0;
}