#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int classNum[51];
int main() {
    int num;
    cin >> num;
    for(int i = 1; i <= num; i++) {
        int size;
        cin >> size;
        int min77 = 987654321, max77 = -1;
        for(int j = 0; j < size; j++) {
            cin >> classNum[j];
            if(classNum[j] > max77) {
                max77 = classNum[j];
            }
            if(classNum[j] < min77) {
                min77 = classNum[j];
            }
        }
        sort(classNum, classNum + size);
        int min7 = -1;
        for(int k = 1; k < size; k++) {
            int mini = classNum[k] - classNum[k - 1];
            if(mini > min7) {
                min7 = mini;
            }
        }
        cout << "Class " << i << "\n";
        cout << "Max " << max77 << ", Min " << min77 << ", Largest gap " << min7 << "\n";
    }
    return 0;
}