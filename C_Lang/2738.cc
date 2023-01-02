#include <iostream>
using namespace std;
int n, m;
int a[101][101];
int b[101][101];
int c[101][101];

void input() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }
}

void cal() {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void print() {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    input();
    cal();
    print();
}