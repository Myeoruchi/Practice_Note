#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n, m; cin >> n >> m;
    int arr[n][m], dp[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            dp[i][j] = arr[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i && j) { dp[i][j] += max(dp[i-1][j], dp[i][j-1]); }
            else if (i) { dp[i][j] += dp[i-1][j]; }
            else if (j) { dp[i][j] += dp[i][j-1]; }
        }
    }
    
    cout << dp[n-1][m-1];
}