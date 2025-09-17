#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n, m, k; cin >> n >> m >> k;
    cout << k / m << ' ' << k % m;
}