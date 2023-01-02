#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
bool crr(int x, int y, int k);
void DFS(int idx);
void printKing();
int king[10][10];
int ans = 0;
vector<pair<int, int> > v;
int main(){
    string str;
    for(int i=1; i<=9; i++){
        cin >> str;
        for(int j=0; j<9; j++){
            king[i][j+1] = str[j] - '0';
            if(king[i][j+1] == 0) v.push_back(make_pair(i, j+1));
        }
    }   
    DFS(0); // 벡터의 0번째 index 부터 확인
    return 0;
}

void DFS(int idx){ 
    if(idx == v.size()) {
        K();
        exit(0);
    }
    int x = v[idx].first, y = v[idx].second;
    for(int j=1; j<=9; j++){
        if(crr(x, y, j)) { // 가로, 세로, 3x3 모두 없는 수일 경우
            king[x][y] = j; // 해당 칸에 넣어주기
            DFS(idx+1); // 다음 depth로 
            king[x][y] = 0; // 백트래킹
        } 
    }
    return;
} 

bool crr(int x, int y, int k){ 
    for(int i=1; i<=9; i++) { // 세로 중복 확인
        if(i == x) continue;
        if(king[i][y] == k) return false;
    }
    for(int i=1; i<=9; i++) { // 가로 중복 확인
        if(i == y) continue;
        if(king[x][i] == k) return false;
    }
    int tx, ty; // 3×3 크기의 보드에 중복 없는지 확인
    if(x%3 == 0) tx = x/3;
    else tx = x/3+1;
    if(y%3 == 0) ty = y/3;
    else ty = y/3+1;
    tx *= 3, ty *= 3;
    for(int i=tx-2; i<=tx; i++){
        for(int j=ty-2; j<=ty; j++){
            if(i == x && j == y) continue;
            if(king[i][j] == k) return false;
        }
    }
    return true;
}



void K(){
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            cout << king[i][j];
        }
        cout << "\n";
    }
}