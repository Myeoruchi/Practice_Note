#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n; cin >> n;
    int ans = 0;
    int mini = 1e9;
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        mini = min(t, mini);
        ans = max(ans, t - mini);
        cout << ans << ' ';
    }
}