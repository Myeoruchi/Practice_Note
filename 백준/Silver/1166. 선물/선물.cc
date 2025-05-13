#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    ll n, l, w, h;
    cin >> n >> l >> w >> h;
    double low = 0, mid, high = min({l, w, h});
    
    for (int i = 0; i < 60; i++) {
        mid = (low + high) / 2;
        if (ll(l / mid) * ll(w / mid) * ll(h / mid) >= n) { low = mid; }
        else { high = mid; }
    }
    
    cout.precision(9);
    cout << fixed << low;
}