#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    int n, m, k;
    cin >> n >> m >> k;
    vector<string> v(n);
    vector<vector<vector<int>>> cnt(k, vector<vector<int>> (k, vector<int> (26, 0)));
    for (auto &s: v) { cin >> s; }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cnt[i % k][j % k][v[i][j] - 'A']++;
        }
    }
    int ans = 0, max = (n / k) * (m / k), idx[k][k];
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            auto tmp = max_element(cnt[i][j].begin(), cnt[i][j].end());
            ans += max - *tmp;
            idx[i][j] = tmp - cnt[i][j].begin();
        }
    }
    cout << ans << '\n';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << char(idx[i % k][j % k] + 'A');
        }
        cout << '\n';
    }
}