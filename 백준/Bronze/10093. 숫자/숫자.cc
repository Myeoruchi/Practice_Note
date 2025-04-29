#include <iostream>
using namespace std;
using ll = long long;
#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    ll a, b;
    cin >> a >> b;
    if (a > b) { swap(a, b); }
    cout << (a == b ? 0 : b - a - 1) << '\n';
    for (ll i = a + 1; i < b; i++) { cout << i << ' '; }
}