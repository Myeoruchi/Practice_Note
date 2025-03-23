#include <iostream>
#include <algorithm>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0);

int main() {
    FAST_IO;
    int n, m;
    cin >> n >> m;
    int six[m], single[m];
    for (int i = 0; i < m; i++) {
        cin >> six[i] >> single[i];
        if (single[i] * 6 < six[i]) {
            six[i] = single[i] * 6;
        }
    }
    sort(six, six + m);
    sort(single, single + m);
    cout << n / 6 * six[0] + min(n % 6 * single[0], (n % 6 ? six[0] : 0));
}