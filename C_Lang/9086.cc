#include <iostream>
#include <cstring>
using namespace std;

void cal() {
    string str;
    cin >> str;
    cout << str[0] << str[str.size() - 1] << endl;

}

int main() {
    int num;
    cin >> num;
    for(int i = 0; i < num; i++) {
        cal();
    }
}