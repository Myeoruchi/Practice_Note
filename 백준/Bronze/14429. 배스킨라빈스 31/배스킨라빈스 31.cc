#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n; cin >> n;
    int a = 1e5, b = 1;
    for (int i = 1; i <= n; i++) {
        int j, m; cin >> j >> m;
        if (a > (j-1) / (m+1) + 1) {
            a = (j-1) / (m+1) + 1;
            b = i;
        }
    }
    cout << b << ' ' << a * 2;
}