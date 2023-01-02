#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int m, n;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    cin >> n >> m;
    //cout << n << m;
    vector<int> vet;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        vet.push_back(temp);
        //cout << "check" << i << endl;
    }
    //cout << "fin1";
    sort(vet.begin(), vet.end());
    //cout << "oper1";
    int sum = 0;
    for(int i = 0; i < m; i++) {
        sum += vet[m-i-1];
        //cout << "check" << sum;
    }
    int num1 = 1, num2 = 0;
    for(int i = n; i > m; i--) {
        num1 *= i;
        num2 ++;
        //cout << "che" << num2;
    }
    //cout << "oper2";
    for(int i = num2; i > 0; i--) {
        num1 /= i;
    }
    vector<int> per; //6C4
    vector<int> ball; //0, 1로 구성된 배열
    for(int i = 1; i <= n - m; i++) {
        ball.push_back(0);
    }
    //cout << "oper3";
    for(int i = 1; i <= m; i++) {
        ball.push_back(1);
    }
    /*for(int i = 0; i < ball.size(); i++) {
        cout << ball[i];
	}*/
	sort(ball.begin(), ball.end());
    //cout << "oper4" << endl;
    do {
        int ss = 0;
        for(int i = 0; i < vet.size(); i++) {
            if(ball[i] == 1) {
                ss += vet[i];
                //cout << "cham";
            }
        }
        per.push_back(ss);
        //cout << "ss" << ss;
    } while(next_permutation(ball.begin(), ball.end()));
    //cout << "is it end?" << endl;
    
    int cnt;
    int kal = 0;
    for(int i = 2; i <= vet[n - 1] * m; i++) {
        cnt = 0;
        for(int j = 2; j <= i; j++) {
            if(i % j == 0) {
                cnt++;
            }
            if(cnt > 1) {
                break;
			}
        }
        if(cnt == 1) { //소수인 경우 계산
            for(int t = 0; t < per.size(); t++) {
                if(i == per[t]) {
                    cout << i << " ";
                    kal++;
                    break;
                }
            }
        }
    }
    if(kal == 0) {
        cout << "-1";
	}
}
