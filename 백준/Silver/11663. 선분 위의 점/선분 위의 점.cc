#include <iostream>
#include <algorithm>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    int n, m, low, high;
    cin >> n >> m;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    
    while (m--) {
        cin >> low >> high;
        cout << upper_bound(arr, arr+n, high) - lower_bound(arr, arr+n, low) << '\n';
    }
}