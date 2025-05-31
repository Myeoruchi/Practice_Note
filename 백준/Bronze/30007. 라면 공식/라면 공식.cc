#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n; cin >> n;
    while (n--) {
        int a, b, x;
        cin >> a >> b >> x;
        cout << a * (x - 1) + b << '\n';
    }
}