#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int n;
    cin >> n;
    if (n == 1) { cout << "1\n1 1"; }
    else {
        cout << 2 * n - 2 << '\n';
        for (int i = 1; i <= n; i++) { cout << "1 " << i << '\n'; }
        for (int i = 2; i < n; i++) { cout << n << ' ' << i << '\n'; }
    }
}