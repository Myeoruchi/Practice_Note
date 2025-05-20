#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1) { for (int k = n-i; k > 0; k--) { cout << ' '; } }
            else if (i != n) { cout << ' '; }
            else { cout << '*'; }
            if (j == 1 || j == i || i == n) { cout << '*'; }
            else { cout << ' '; }
        }
        cout << '\n';
    }
}