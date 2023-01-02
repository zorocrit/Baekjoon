#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
using graph = vector<vector<pii>>;

int n, m;
int dist[1001][1001];
int dp[1001];

int dijkstra(int start, graph &al);
int memo(int v, graph &al);

int main()
{
    memset(dp, -1, sizeof dp);
    fill(&dist[0][0], &dist[0][0] + 1001 * 1001, numeric_limits<int>::max());
    ios::sync_with_stdio(false); cin.tie(0);

    cin >> n >> m;

    graph adj(n + 1);
    
    for (int i = 0; i < m; ++i)
    {
        int go, to, fee;
        cin >> go >> to >> fee;
        adj[go].push_back({to, fee});
        adj[to].push_back({go, fee});
    }

    for (int i = 1; i <= n; ++i)
        dijkstra(i, adj);

    cout << memo(1, adj);
}

int memo(int v, graph &al)
{
    if (v == 2)
        return 1;

    int &ret = dp[v];

    if (ret != -1)
        return ret;
    
    ret = 0;

    for (auto item: al[v])
        if (dist[v][2] > dist[item.first][2])
            ret += memo(item.first, al);
    
    return ret;
}

int dijkstra(int start, graph &al)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    pq.push({0, start});
    dist[start][start] = 0;

    while (pq.size())
    {
        auto cur = pq.top();
        pq.pop();

        for (auto item: al[cur.second])
        {
            int nDist = cur.first + item.second;
            
            if (nDist < dist[start][item.first])
            {
                dist[start][item.first] = nDist;
                pq.push({nDist, item.first});
            }
        }
    }

    return dist[start][2];
}