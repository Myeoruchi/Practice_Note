#include <iostream>
using namespace std;

int arr[1002];

int dp(int n) {
    if (n == 1) { return 1; }
    if (arr[n]) { return arr[n]; }
    arr[n] = dp(n-1) * n;
    while (arr[n] % 10 == 0) {
        arr[n] /= 10;
    }
    return arr[n] %= 1000;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, n;
    cin >> t;
    
    while (t--) {
        cin >> n;
        cout << dp(n) % 10 << '\n';
    }
    return 0;
}