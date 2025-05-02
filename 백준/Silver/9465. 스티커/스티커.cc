#include <iostream>
#include <cstring>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int arr[2][100001];
int ans[2][100001];

int dp(int r, int c) {
    if (ans[r][c] >= 0) { return ans[r][c]; }
    return ans[r][c] = arr[r][c] + max(dp(!r, c-1), dp(!r, c-2));
}

int main() {
    IO;
    int t, n;
    cin >> t;
    while (t--) {
        memset(ans, 0xFF, 2 * 100001 * sizeof(int));
        cin >> n;
        for (int i = 0; i < 2; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> arr[i][j];
            }
        }
        ans[0][1] = arr[0][1]; ans[0][2] = arr[1][1] + arr[0][2];
        ans[1][1] = arr[1][1]; ans[1][2] = arr[0][1] + arr[1][2];
        cout << max(dp(0, n), dp(1, n)) << '\n';
    }
}