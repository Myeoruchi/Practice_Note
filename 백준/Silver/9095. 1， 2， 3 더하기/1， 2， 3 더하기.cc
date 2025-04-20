#include <iostream>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int arr[12];

int dp(int n) {
    if (arr[n]) { return arr[n]; }
    return arr[n] = dp(n-1) * 2 - dp(n-4);
}

int main() {
    int t, n;
    cin >> t;
    arr[1] = 1, arr[2] = 2, arr[3] = 4, arr[4] = 7;
    while (t--) {
        cin >> n;
        cout << dp(n) << '\n';
    }
}