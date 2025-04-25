#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int n, m, idx = 0;
    cin >> n >> m;
    vector<ll> v(n), ans(n);
    for (ll &e: v) { cin >> e; }
    for (int i = 0; i < n; i++) {
        if (i && ans[i-1]) { ans[i] = ans[i-1] - v[i-1]; }
        if (i > idx) { idx = i; }
        for (idx; idx < n; idx++) {
            if (ans[i] + v[idx] > m) { break; }
            ans[i] += v[idx];
        }
    }
    cout << *max_element(ans.begin(), ans.end());
}