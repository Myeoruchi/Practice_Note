#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n; cin >> n;
    int minE = 1e5, maxS = 0;
    while (n--) {
        int s, e; cin >> s >> e;
        minE = min(minE, e);
        maxS = max(maxS, s);
    }
    cout << (maxS > minE ? maxS - minE : 0);
}