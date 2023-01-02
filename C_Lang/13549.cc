#include <iostream>
#include <deque>
#include <cstring>
#include <queue>
using namespace std;

int N, K;
int visited[100001];

int bfs() {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({ 0, N });
    visited[N] = true;
    while (!q.empty()) {
        int time = q.top().first;
        int x = q.top().second;
        q.pop();

        if (x == K) return time;

        if (x * 2 < 100001 && !visited[x * 2]) {
            q.push({ time, x * 2 });
            visited[x * 2] = true;
        }

        if (x + 1 < 100001 && !visited[x + 1]) {
            q.push({ time + 1, x + 1 });
            visited[x + 1] = true;
        }

        if (x - 1 >= 0 && !visited[x - 1]) {
            q.push({ time + 1 , x - 1 });
            visited[x - 1] = true;
        }
    }
}

int main() {
    cin >> N >> K;
    int t = bfs();
    cout << t;
    return 0;
}