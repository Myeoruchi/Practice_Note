#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n; cin >> n;
    while (n--) {
        int cnt; cin >> cnt;
        for (int i = 0; i < cnt / 5; i++) { cout << "++++ "; }
        for (int i = 0; i < cnt % 5; i++) { cout << '|'; }
        cout << '\n';
    }
}