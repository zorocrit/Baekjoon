#include <bits/stdc++.h>

using namespace std;
int n, m;
#define INF 987654321
void BFS();
int v[101][101];
int dv[101][101];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            int temp;
            scanf("%1d", &temp);
            v[i][j] = temp;
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            //printf("%d ", v[i][j]);
        }
        //printf("\n");
    }
    BFS();
}

void BFS() {
    for(int i = 0; i < 101; ++i) //초기화
        fill(dv[i], dv[i] + 101, INF);
    queue<pair<int, int>> q;
    dv[1][1] = 1; //첫번째 노드도 포함해야하니 1로 두기
    q.push({1, 1});
    while(!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        for(int i = 0; i < 4; ++i) {
            int ny = y + dy[i]; //새로운 좌표 정보
            int nx = x + dx[i];
            //1. 좌표값이 유효하지 않은 경우
            //2. 벽인 경우
            //3. 이미 방문한 경우 (dist값이 INF값이 아니면 방문한것)
            if(nx <= 0 || nx > m || ny <= 0 || ny > n) continue;
            if(v[ny][nx] == 0) continue;
            if(dv[ny][nx] <= dv[y][x] + 1) continue;
            //거리 갱신
            dv[ny][nx] = dv[y][x] + 1;
            q.push({ny, nx});
        }
    }
    printf("%d", dv[n][m]);
}