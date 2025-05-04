#include <iostream>
using namespace std;
using ll = long long;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    ll a, b, c;
    ll ans = 1;
    cin >> a >> b >> c;
    while (b) {
        if (b & 1) { ans = (ans * a) % c; }
        a = (a * a) % c;
        b >>= 1;
    }
    cout << ans;
}