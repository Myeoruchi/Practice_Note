#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n, m; cin >> n >> m;
    int arr[n];
    for (int &e: arr) { cin >> e; }
    sort(arr, arr+n, greater<int>());
    
    ll ans = 0;
    int idx = 0, t, q;
    while (m--) {
        cin >> t >> q;
        while (ans < q && idx < n) { ans += arr[idx++] + t; }
        if (ans < q) { ans = -1; break; }
    }
    while (idx < n) { ans += arr[idx++] + t; }
    cout << ans;
}