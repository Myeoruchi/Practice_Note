#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int dp[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int main() {
    IO;
    int n; cin >> n;
    for (int i = 2; i <= n; i++) {
        int tmp = 0;
        for (int j = 0; j <= 9; j++) {
            tmp = (tmp + dp[j]) % 10007;
            dp[j] = tmp;
        }
    }
    cout << dp[9];
}