#include <iostream>
using namespace std;

unsigned long long arr[20001];

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

    int n;
    cin >> n;
    
    arr[1] = 1;
    for (int i = 2; i <= n; i++) {
        arr[i] = arr[i-1] * i;
        while (arr[i] % 10 == 0) {
            arr[i] /= 10;
        }
        arr[i] %= 1000000;
    }
    cout << arr[n] % 10;
    return 0;
}