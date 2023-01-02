#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int v, e;
int parent[10001];

struct Edge {
    int start, end, weight;
    bool operator< (const Edge& a) const {
        return weight < a.weight;
    }
    bool operator> (const Edge& a) const {
        return weight > a.weight;
    }
};

int find(int node) {
    if(node == parent[node]) {
        return node;
    }
    return parent[node] = find(parent[node]);
}

void uni(int node_a, int node_b) {
    int root_a = find(node_a);
    int root_b = find(node_b);

    parent[root_b] = root_a;
}

int main()  {
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    cin >> v >> e;
    int ans = 0;
    priority_queue<Edge, vector<Edge>, greater<Edge>> pq;
    for(int i = 1; i <= v; i++) {
        parent[i] = i;
    }
    for(int i = 0; i < e; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        
        Edge edge;
        edge.start = a; edge.end = b; edge.weight = c;
        pq.push(edge);
    }
    while(!pq.empty()) {
        Edge edge = pq.top();
        pq.pop();
        if(find(edge.start) != find(edge.end)) {
            uni(edge.start, edge.end);
            ans += edge.weight;
        }
    }
    cout << ans;
    return 0;
}
