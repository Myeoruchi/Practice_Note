#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int t;
    cin >> t;
    while (t--) {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << min({a * c, (abs(a - b) + a) * d, abs(a - b) * c + b * d}) << '\n';
    }
}