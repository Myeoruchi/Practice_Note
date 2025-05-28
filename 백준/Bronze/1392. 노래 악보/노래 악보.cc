#include <iostream>
#include <algorithm>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int arr[101];

int main() {
    IO;
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    
    while (q--) {
        int t; cin >> t;
        cout << lower_bound(arr, arr+n+1, t+1) - arr << '\n';
    }
}