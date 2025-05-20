#include <iostream>
#include <cstring>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int mem[101], cost[101];

int main() {
    IO;
    int n, m, sum = 0; cin >> n >> m;
    for (int i = 1; i <= n; i++) { cin >> mem[i]; }
    for (int i = 1; i <= n; i++) {
        cin >> cost[i];
        sum += cost[i];
    }
    int dp[sum + 1];
    memset(dp, 0, (sum + 1) * sizeof(int));
    
    for (int i = 1; i <= n; i++) {
        for (int j = sum; j >= cost[i]; j--) {
            dp[j] = max(dp[j], dp[j-cost[i]] + mem[i]);
        }
    }
    
    for (int i = 0; i <= sum; i++) {
        if (dp[i] >= m) { cout << i; break; }
    }
}