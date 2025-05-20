#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n; cin >> n;
    for (int i = n; i > 0; i--) {
        for (int j = n-i; j > 0; j--) { cout << ' '; }
        for (int j = 0; j < i*2-1; j++) { cout << '*'; }
        cout << '\n';
    }
    for (int i = 2; i <= n; i++) {
        for (int j = n-i; j > 0; j--) { cout << ' '; }
        for (int j = 0; j < i*2-1; j++) { cout << '*'; }
        cout << '\n';
    }
}