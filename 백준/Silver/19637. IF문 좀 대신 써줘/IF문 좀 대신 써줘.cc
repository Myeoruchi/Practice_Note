#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

bool cmp(int n, const pair<string, int> &p) {
    return n <= p.second;
}

int main() {
    FAST_IO;
    int n, m, tmp;
    cin >> n >> m;
    vector<pair<string, int>> v(n);
    for (auto &elem: v) {
        cin >> elem.first >> elem.second;
    }
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        cout << v[upper_bound(v.begin(), v.end(), tmp, cmp)-v.begin()].first << '\n';
    }
}