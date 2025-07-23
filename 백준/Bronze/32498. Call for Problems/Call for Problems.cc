#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n; cin >> n;
    int cnt = 0, t;
    while (n--) {
        cin >> t;
        if (t % 2) { cnt++; }
    }
    cout << cnt;
}