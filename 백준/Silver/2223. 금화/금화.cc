#include <iostream>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    int t, x, m, minimum = 1 << 30, a, b, cnt;
    cin >> t >> x >> m;
    while (m--) {
        cin >> a >> b;
        minimum = min(minimum, (a - 1) / b);
    }
    if (!minimum) { cout << 0; }
    else {
        cnt = t > minimum ? minimum + (t - minimum) / 2 : t;
        cout << x * cnt;
    }
}