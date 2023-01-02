#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
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

bool cross_test_simple(point& a, point& b, point& c, point& d) {
    int ab = ccw(a, b, c) * ccw(a, b, d);
    int cd = ccw(c, d, a) * ccw(c, d, b);
    return (ab < 0 && cd < 0);
}

point a, b, c, d;

int main() {
    cin >> a.x >> a.y >> b.x >> b.y;
    cin >> c.x >> c.y >> d.x >> d.y;
    if(cross_test_simple(a, b, c, d)) {
        cout << "1";
    }
    else {
        cout << "0";
    }
    return 0;
}