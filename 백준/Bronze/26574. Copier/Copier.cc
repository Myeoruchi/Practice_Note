#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int t, n; cin >> t;
    while (t--) {
        cin >> n;
        cout << n << ' ' << n << '\n';
    }
}