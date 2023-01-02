#include <iostream>
#include <vector>
#include <cstring>

using namespace std;
int parent[1000005];
int group_size[1000005];
int n;

int find(int node) {
    if(node == parent[node]) {
        return node;
    }
    return parent[node] = find(parent[node]);
}

void uni(int node_a, int node_b) {
    int root_a = find(node_a);
    int root_b = find(node_b);

    if(root_a != root_b) {
        parent[root_b] = root_a;
        group_size[root_a] = group_size[root_a] + group_size[root_b];
    }
}

void input() {
    cin >> n;
    for(int k = 1; k <= 1000000; k++) {
        parent[k] = k;
        group_size[k] = 1;
    }

    for(int i = 0; i < n; i++) {
        string command;
        cin >> command;

        if(command == "I") {
            int a, b;
            cin >> a >> b;
            uni(a, b);
        }
        else {
            int aa, bb;
            cin >> aa;
            bb = find(aa);
            cout << group_size[bb] << '\n';
        }
    }
}


int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    input();
}