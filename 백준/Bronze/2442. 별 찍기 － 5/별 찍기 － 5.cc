#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) { cout << ' '; }
        for (int j = 0; j < 2 * i - 1; j++) { cout << '*'; }
        cout << '\n';
    }
}