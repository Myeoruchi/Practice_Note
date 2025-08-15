#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int a, b, c, d, n;
    cin >> a >> b >> c >> d >> n;
    
    int ans = 0;
    while (n--) {
        int u, v; cin >> u >> v;
        if (max(a * (v - b) * (v - b) + c, d) == u) { ans++; }
    }
    cout << ans;
}