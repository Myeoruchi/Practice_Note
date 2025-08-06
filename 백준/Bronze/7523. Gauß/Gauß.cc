#include <iostream>
using namespace std;
using ll = long long;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        ll a, b; cin >> a >> b;
        cout << "Scenario #" << i << ":\n" << (b - a + 1) * (a + b) / 2 << "\n\n";
    }
}