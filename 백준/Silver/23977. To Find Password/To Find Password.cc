#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

#define IO cin.tie(0)->sync_with_stdio(0)

int arr[8];

int main() {
    IO;
    int k, n; cin >> k >> n;
    for (int i = 0; i < n; i++) { cin >> arr[i]; }
    
    ll ans = arr[0];
    for (int i = 1; i < n; i++) {
        ans = ans * arr[i] / __gcd(ans, (ll)arr[i]);
    }
    cout << ans - k;
}