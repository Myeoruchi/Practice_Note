#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int n, x, y, ans = 4;
    cin >> n >> x >> y;
    if (x == 1) { ans--; }
    if (y == 1) { ans--; }
    if (x == n) { ans--; }
    if (y == n) { ans--; }
    cout << ans;
}