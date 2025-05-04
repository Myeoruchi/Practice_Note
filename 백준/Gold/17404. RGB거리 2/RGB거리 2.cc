#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
	cin.sync_with_stdio(false);
	
	int n, ans = 1e9;
	cin >> n;
	int arr[n][3];
    int dp[n][3];

    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    
    for (int i = 0; i < 3; i++) {
        dp[0][i] = arr[0][i];
        dp[0][(i+1) % 3] = dp[0][(i+2) % 3] = 1e9;
        for (int j = 1; j < n; j++) {
            dp[j][0] = arr[j][0] + min(dp[j-1][1], dp[j-1][2]);
	        dp[j][1] = arr[j][1] + min(dp[j-1][0], dp[j-1][2]);
	        dp[j][2] = arr[j][2] + min(dp[j-1][0], dp[j-1][1]);
        }
        ans = min({ans, dp[n-1][(i+1) % 3], dp[n-1][(i+2) % 3]});
    }
	cout << ans;
}