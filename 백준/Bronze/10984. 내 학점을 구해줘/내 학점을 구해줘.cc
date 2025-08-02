#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int csum = 0;
        double gsum = 0;
        for (int i = 0; i < n; i++) {
            int c;
            double g;
            cin >> c >> g;
            gsum += c * g;
            csum += c;
        }
        cout.precision(1);
        cout << csum << ' ' << fixed << gsum / csum << '\n';
    }
}