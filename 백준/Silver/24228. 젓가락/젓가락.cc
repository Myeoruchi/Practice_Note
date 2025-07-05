#include <iostream>
using namespace std;
using ll = long long;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    ll n, r, cnt = 0; cin >> n >> r;
    cout << n + r * 2 - 1;
}