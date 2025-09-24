#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        int a, b; cin >> a >> b;
        cout << "Case " << i << ": " << a + b << '\n';
    }
}