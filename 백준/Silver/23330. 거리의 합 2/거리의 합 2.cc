#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n; cin >> n;
    int arr[n];
    for (int &e: arr) { cin >> e; }
    sort(arr, arr + n);
    
    ll ans = 0, prev = 0;
    for (int i = 1; i < n; i++) {
        prev += arr[i] - arr[0];
    }
    for (int i = 1; i < n; i++) {
        ans += prev << 1;
        prev -= ll(arr[i] - arr[i-1]) * (n - i); 
    }
    cout << ans;
}