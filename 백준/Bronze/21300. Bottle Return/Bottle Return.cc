#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int ans = 0;
    for (int i = 0; i < 6; i++) {
        int n; cin >> n;
        ans += 5 * n;
    }
    cout << ans;
}