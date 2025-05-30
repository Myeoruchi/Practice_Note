#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int dp[101][10];

int main() {
    IO;
    int n; cin >> n;
    for (int i = 1; i <= 9; i++) { dp[1][i] = 1; }
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j <= 9; j++) {
            if (j == 0) { dp[i][j] = dp[i-1][1]; }
            else if (j == 9) { dp[i][j] = dp[i-1][8]; }
            else { dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]) % int(1e9); }
        }
    }
    
    int sum = 0;
    for (int &e: dp[n]) {
        sum = (sum + e) % int(1e9);
    }
    cout << sum;
}