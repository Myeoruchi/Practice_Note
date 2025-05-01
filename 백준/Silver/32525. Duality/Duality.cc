#include <iostream>
#include <vector>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int t, n, diff = 2e8 + 1;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<pair<int, int>> v(n);
        for (auto &e: v) { cin >> e.first >> e.second; }
        for (int i = 0; i < n; i++) {
            cout << i + 1 << ' ' << v[i].first + 1 << ' ' << v[i].second + diff << '\n';
        }
    }
}