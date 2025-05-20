#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)
int dp[100001];

int main() {
    IO;
    int n, k; cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int w, v; cin >> w >> v;
        for (int j = k; j >= w; j--) {
            dp[j] = max(dp[j], dp[j-w] + v);
        }
    }
    cout << dp[k];
}