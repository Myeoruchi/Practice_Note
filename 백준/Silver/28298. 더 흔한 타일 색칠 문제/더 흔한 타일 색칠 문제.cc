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
    for (auto &s: v) { cin >> s; }
    
    int ans = 0, max = (n / k) * (m / k);
    int cnt[26], idx[k][k];
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            for (auto &e: cnt) { e = 0; }
            for (int p = i; p < n; p += k) {
                for (int q = j; q < m; q += k) {
                    cnt[v[p][q] - 'A']++;
                }
            }
            auto tmp = max_element(cnt, cnt + 26);
            ans += max - *tmp;
            idx[i][j] = tmp - cnt;
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