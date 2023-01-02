#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;
#define x first
#define y second
using ll = long long;
using point = pair<ll, ll>;
using vec = pair<ll, ll>;
vec get_vector(vec& a, vec& b);
int ccw(vec& u, vec& v);
int ccw(point& a, point& b, point& c);

vec get_vector(vec& a, vec& b) {
    return {b.x - a.x, b.y - a.y};
}

int ccw(vec& u, vec& v) {
    ll cross_product = u.x * v.y - u.y * v.x;
    if (cross_product > 0) return 1;
    else if (cross_product < 0) return -1;
    else return 0;
}

int ccw(point& a, point& b, point& c) {
    vec u = get_vector(a, b);
    vec v = get_vector(b, c);
    return ccw(u, v);
}

vector<point> get_part_of_hull(vector<point>& p) {
    int n = p.size();
    vector<point> hull;
    for(int i = 0; i < n; ++i) {
        while(hull.size() >= 2) {
            int m = hull.size();
            if(ccw(hull[m - 2], hull[m - 1], p[i]) > 0) break;
            hull.pop_back();
        }
        hull.push_back(p[i]);
    }
    return hull;
}

vector<point> get_convex_hull(vector<point>& p) {
    sort(p.begin(), p.end());
    vector<point> up = get_part_of_hull(p);
    reverse(p.begin(), p.end());
    vector<point> down = get_part_of_hull(p);
    up.insert(up.end(), down.begin() + 1, down.end() - 1);
    return up;
}

vector<point> p;

int main() {
    int a;
    cin >> a;
    for(int i = 0; i < a; i++) {
        ll b, c;
        cin >> b >> c;
        p.push_back({b, c});
    }
    vector<point> num = get_convex_hull(p);
    cout << num.size();
    return 0;
}