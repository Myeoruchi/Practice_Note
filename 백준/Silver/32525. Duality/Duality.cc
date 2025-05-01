#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

struct point { int x, y, idx; };

bool comp(point &a, point &b) {
    if (a.x != b.x) { return a.x < b.x; }
    return a.y < b.y;
}

int main() {
    IO;
    int t, n, diff = -1e9;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<point> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i].x >> v[i].y;
            v[i].idx = i + 1;
        }
        sort(v.begin(), v.end(), comp);
        for (int i = 0; i < n; i++) {
            cout << v[i].idx << ' ' << v[i].x + 1 << ' ' << diff++ << '\n';
        }
    }
}