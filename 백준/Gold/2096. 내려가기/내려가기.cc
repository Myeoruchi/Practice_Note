#include <iostream>
#include <algorithm>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int maxi[3], mini[3], cur[3], tmp[3];

int main() {
    FAST_IO;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> cur[0] >> cur[1] >> cur[2];
        tmp[0] = cur[0] + max(maxi[0], maxi[1]);
        tmp[1] = cur[1] + max({maxi[0], maxi[1], maxi[2]});
        tmp[2] = cur[2] + max(maxi[1], maxi[2]);
        for (int i = 0; i < 3; i++) { maxi[i] = tmp[i]; }
        tmp[0] = cur[0] + min(mini[0], mini[1]);
        tmp[1] = cur[1] + min({mini[0], mini[1], mini[2]});
        tmp[2] = cur[2] + min(mini[1], mini[2]);
        for (int i = 0; i < 3; i++) { mini[i] = tmp[i]; }
    }
    cout << max({maxi[0], maxi[1], maxi[2]}) << ' ' << min({mini[0], mini[1], mini[2]});
}