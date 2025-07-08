#include <iostream>
#include <algorithm>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int arr[100000];

int main() {
    IO;
    int n; cin >> n;
    for (int i = 0; i < n; i++) { cin >> arr[i]; }
    sort(arr, arr+n);
    
    int ans = arr[n-1];
    for (int i = 0; i < (n >> 1); i++) {
        ans += arr[n-i-2] - arr[i];
    }
    cout << ans << '\n';
}