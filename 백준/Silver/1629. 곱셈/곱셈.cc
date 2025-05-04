#include <iostream>
using namespace std;
using ll = long long;

#define IO ios::sync_with_stdio(0), cin.tie(0)
ll arr[31];

int main() {
    IO;
    int a, b, c;
    ll ans = 1;
    cin >> a >> b >> c;
    arr[0] = a % c;
    for (int i = 1; i < 31; i++) {
        arr[i] = ((arr[i-1] % c) * (arr[i-1] % c)) % c;
    }
    for (int i = 30; i >= 0; i--) {
        ans *= (b >> i) & 1 ? arr[i] : 1;
        ans %= c;
    }
    cout << ans;
}