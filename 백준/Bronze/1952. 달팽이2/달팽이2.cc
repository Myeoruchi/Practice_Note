#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n, m; cin >> n >> m;
    int ans = 0, next = 0;
    while (n > 1 && m) {
        if (next == 0) { m--; }
        else { n--; }
        next = !next;
        ans++;
    }
    cout << ans;
}