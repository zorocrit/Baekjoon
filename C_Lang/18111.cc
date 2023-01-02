#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
long long B;
int num; //반복 횟수
int check = 0;
int minN = 256, sumN = 0, maxN = 0;
int main() {
    cin >> N >> M >> B;
    num = N * M;
    vector<int> block(num);
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> block[check];
            if(block[check] <= minN) {
                minN = block[check];
            }
            if(block[check] >= maxN) {
                maxN = block[check];
            }
            sumN += block[check];
            check++;
        }
    }
    sumN /= num;
    /*for(int i = 0; i < num; i++) {
        cout << block[i] << endl;
    }*/
    int cha = maxN - minN + 1;
    vector<int> car(256);
    vector<int> time(256);
    for(int cch = 0; cch <= 256; cch++) {
        int temp = 0;
        for(int j = 0; j < num; j++) {
            temp = block[j] - cch;
            if(temp >= 0) {
                time[cch] += temp * 2;
                car[cch] += temp;
            }
            else {
                time[cch] += temp * (-1);
                car[cch] += temp;
            }
        }
    }
    for(int i = 0; i <= 256; i++) {
        car[i] = B + car[i];
        //cout << i << " " << time[i] << " " << car[i] << endl;
    }
    long long final = 2147483647;
    int high = 0;
    for(int j = 0; j <= 256; j++) {
        if(time[j] <= final) {
            if(car[j] >= 0) {
                final = time[j];
                high = j;
            }
        }
    }
    cout << final << " " << high;
}