#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        n = n > 15 ? (((n - 15) / 14) % 2 ? ((n - 15) % 14) + 1 : 15 - ((n - 15) % 14)) : n;
        for (int i = 3; i >= 0; i--) { cout << ((n >> i) & 1 ? "딸기" : "V"); }
        cout << '\n';
    }
}