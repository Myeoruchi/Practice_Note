#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int dp[100'001];
bool close[100'001];

int main() {
    IO;
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    while (m--) {
        int l, r; cin >> l >> r;
        for (int i = l; i <= r; i++) {
            if (!close[i]) { close[i] = true; }
        }
    }
    
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        if (close[i]) { continue; }
        if (i >= a && i >= b && dp[i-a] && dp[i-b]) { dp[i] = min(dp[i-a], dp[i-b]) + 1; }
        else if (i >= a && dp[i-a]) { dp[i] = dp[i-a] + 1; }
        else if (i >= b && dp[i-b]) { dp[i] = dp[i-b] + 1; }
    }
    cout << (dp[n] ? dp[n] - 1 : -1);
}