#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int w, h, p, q, t;
    cin >> w >> h >> p >> q >> t;
    int mw = t % (2 * w), mh = t % (2 * h);
    cout << (p + mw >= w * 2 ? (p + mw) % (w * 2) : w - abs(p + mw - w)) << ' '
        << (q + mh >= h * 2 ? (q + mh) % (h * 2) : h - abs(q + mh - h));
}