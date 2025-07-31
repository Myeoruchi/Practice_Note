#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n; cin >> n;
    int cnt = 0;
    while (n--) {
        int t; cin >> t;
        cnt += t % 2 ? -1 : 1;
    }
    cout << (cnt > 0 ? "Happy" : "Sad");
}