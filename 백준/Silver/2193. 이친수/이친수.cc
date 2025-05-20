#include <iostream>
using namespace std;
using ll = long long;

#define IO cin.tie(0)->sync_with_stdio(0)

ll dp[] = {0, 1};

int main() {
    IO;
    int n; cin >> n;
    for (int i = 2; i <= n; i++) {
        ll zero = dp[0];
        dp[0] += dp[1];
        dp[1] = zero;
    }
    cout << dp[0] + dp[1];
}