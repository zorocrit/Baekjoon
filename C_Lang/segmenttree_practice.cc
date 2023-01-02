#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

class segment_tree {
    private:
        vector<ll> tree;
        vector<ll> lazy;

    public:
        segment_tree(int N) {
            tree.resize(4 * N);
            lazy.resize(4 * N);
        }

        void update(int start, int end, int node, int left, int right, ll diff) {
            //start, end를 node가 표현중이다.
            propagate(start, end, node);
            if(end < left || right < start) return;
            if(left <= start && end <= right) {
                lazy[node] += diff;
                propagate(start, end, node);
                return;
            }
            int mid = (start + end) / 2;
            update(start, mid, node * 2, left, right, diff);
            update(mid + 1, end, node*2 + 1, left, right, diff);
            tree[node] = tree[node * 2] + tree[node * 2 + 1];

            /*
                업데이트 할 인덱스가 범위 밖인 경우 종료

                만약 start == end인 경우 리프 노드 이므로 해당 노드를 업데이트 하고 종료합니다.

                업데이트 할 인덱스가 범위 내부(start <= idx <= end)인 경우 재귀호출 후(좌우 서브트리 업데이트) tree[node]에 반영합니다.
                즉, tree[node] = tree[node * 2] + tree[node * 2 + 1] 이 되도록 합니다.
            */    
        }
        void propagate(int start, int end, int node) {
            if(lazy[node] == 0) return;
            tree[node] += (end - start + 1) * lazy[node];

            if(start != end) {
                lazy[node * 2] += lazy[node];
                lazy[node * 2 + 1] += lazy[node];
            }
            lazy[node] = 0;
        }

        ll query(int start, int end, int node, int left, int right) {
            propagate(start, end, node);
            if(right < start || end < left) return 0;
            if(left <= start && end <= right) return tree[node];
            int mid = (start + end) / 2;
            return query(start, mid, node * 2, left, right) + query(mid + 1, end, node * 2 + 1, left, right);
            /*
                쿼리가 범위 내부인 경우 tree[node]를 반환합니다.

                쿼리가 범위 밖인 경우 0을 반환합니다.

                쿼리가 범위와 겹치는 경우 재귀호출을 통해 더한 값을 리턴합니다.
            */
        }
};

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    segment_tree tree(n);
    for(int i = 1; i <= n; i++) {
        ll abc;
        cin >> abc;
        tree.update(1, n, 1, 1, n, abc);
    }
    for(int i = 1; i <= m + k; i++) {
        int num;
        if(num == 1) {
            ll b, c, d;
            cin >> b >> c >> d;
            for(int kt = 0; kt < c - b; kt++) {
                tree.update(1, n, b, b, c, d);
            }
        }
        else {
            ll b, c;
            cout << tree.query(1, n, 1, b, c) << "\n";
        }
    }
    return 0;
}