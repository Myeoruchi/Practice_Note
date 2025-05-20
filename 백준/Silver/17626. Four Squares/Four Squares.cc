#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int dp[50001];

int main() {
    IO;
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        dp[i] = 4;
        for (int j = 1; j * j <= i; j++) {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }
    cout << dp[n];
}