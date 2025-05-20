#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int dp[50001];

int main() {
    IO;
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        dp[i] = 4;
        int j = 1;
        while (1) {
            int pow = j * j;
            if (i - pow < 0) { break; }
            dp[i] = min(dp[i], dp[i - pow] + 1);
            j++;
        }
    }
    cout << dp[n];
}