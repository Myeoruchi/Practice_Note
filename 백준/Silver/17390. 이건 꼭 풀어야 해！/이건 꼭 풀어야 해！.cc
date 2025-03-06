#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, q, a, b;
    cin >> n >> q;
    int arr[n], sum[n+1];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    
    sum[0] = 0;
    for (int i = 1; i <= n; i++) {
        sum[i] = arr[i-1] + sum[i-1];
    }
    
    while (q--) {
        cin >> a >> b;
        cout << sum[b] - sum[a-1] << '\n';
    }
}