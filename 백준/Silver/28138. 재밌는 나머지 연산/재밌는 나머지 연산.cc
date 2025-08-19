#include <iostream>
using namespace std;
using ll = long long;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    ll n, r; cin >> n >> r;
    n -= r;
    
    ll sum = 0;
    for (ll i = 1; i * i <= n; i++) {
        if (i * i == n && i > r) { sum += i; }
        else if (n % i == 0) { sum += (i > r ? i : 0) + (n / i > r ? n / i : 0); }
    }
    cout << sum;
}