#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m, s;
    cin >> n >> m >> s;
    vector<pair<int, int>> v(n+2);
    for (int i = 1; i <= n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    v[0] = {0, 0};
    v[n+1].first = s;
    sort(v.begin(), v.end());
    for (int i = 0; i <= n; i++) {
        if (v[i].first + v[i].second + m <= v[i+1].first) {
            cout << v[i].first + v[i].second;
            return 0;
        }
    }
    cout << -1;
    return 0;
}