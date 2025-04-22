#include <iostream>
using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)
#define MOD 1000000009
ll arr[1000001];

ll dp(int n) {
    if (arr[n]) { return arr[n]; }
    return arr[n] = (dp(n-1) + dp(n-2) + dp(n-3)) % MOD;
}

int main() {
    int t, n;
    cin >> t;
    arr[1] = 1, arr[2] = 2, arr[3] = 4;
    while (t--) {
        cin >> n;
        cout << dp(n) << '\n';
    }
}