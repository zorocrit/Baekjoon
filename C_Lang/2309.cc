#include <iostream>
#include <algorithm>
using namespace std;
/*
int main() {
	int high[9];
	int a;
	for(a = 0; a < 9; a++) {
		cin >> high[a];
	}
	int sum = 0;
	for(a = 0; a < 9; a++) {
		sum = sum + high[a];
	}
	sum = sum - 100;
	int returnIt[2];
	int dd = 0; // break 나오기 용도
	for(a = 0; a < 9; a++) {
		int k;
		for(k = 1 + a; k < 9; k++) {
			if(high[a] + high[k] == sum) {
				returnIt[0] = a;
				returnIt[1] = k;
				dd = 1;
				break;
			}
		}
		if(dd == 1) {
			break;
		}
	}
	//printf("%d %d\n", returnIt[0], returnIt[1]);
	int result[7];
	int check = 0;
	for(a = 0; a < 9; a++) {
		if(a == returnIt[0] || a == returnIt[1]) {
			continue;
		}
		else {
			result[check] = high[a];
			check++;
		}
	}
	int i;
	for(i = 0; i < 6; i++) {
		int temp = 0;
		int j;
		for(j = i + 1; j < 7; j++){
			if(result[i]>result[j]){
				temp=result[i];
				result[i]=result[j];
				result[j]=temp;
			}
		}
	}
	int check2 = 0;
	for(int t = 0; t < 7; t++) {
		cout << result[t];
		if(check2 < 6) {
			cout << '\n';
			check2++;
		}
	}
}*/

int main() {
    int high[9];
	int a;
	for(a = 0; a < 9; a++) {
		cin >> high[a];
	}
	int sum = 0;
	for(a = 0; a < 9; a++) {
		sum = sum + high[a];
	}
	sum = sum - 100;
    sort(high, high + 9);
    int returnIt[2];
	int dd = 0; // break 나오기 용도
	for(a = 0; a < 9; a++) {
		int k;
		for(k = 1 + a; k < 9; k++) {
			if(high[a] + high[k] == sum) {
				returnIt[0] = a;
				returnIt[1] = k;
				dd = 1;
				break;
			}
		}
		if(dd == 1) {
			break;
		}
	}
    for(a = 0; a < 9; a++) {
		if(!(a == returnIt[0] || a == returnIt[1])) {
            cout << high[a] << endl;
        }
    }
}