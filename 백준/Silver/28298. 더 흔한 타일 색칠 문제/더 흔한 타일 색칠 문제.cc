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
    for (string &s: v) { cin >> s; }
    
    int ans = 0, max = (n / k) * (m / k);
    int cnt[26];
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
            char c = tmp - cnt + 'A';
            for (int p = i; p < n; p += k) {
                for (int q = j; q < m; q += k) {
                    v[p][q] = c;
                }
            }
        }
    }
    cout << ans << '\n';
    for (const string &s: v) { cout << s << '\n'; }
}