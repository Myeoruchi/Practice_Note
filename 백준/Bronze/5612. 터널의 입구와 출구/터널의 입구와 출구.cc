#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n, m; cin >> n >> m;
    int ans = m;
    while (n--) {
        int a, b; cin >> a >> b;
        m += a - b;
        if (m < 0) { cout << 0; exit(0); }
        ans = max(ans, m);
    }
    cout << ans;
}