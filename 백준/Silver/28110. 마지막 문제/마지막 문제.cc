#include <iostream>
#include <algorithm>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    
    int size = 1, ans = -1;
    for (int i = 0; i < n-1; i++) {
        if ((size >> 1) < (arr[i+1] - arr[i] >> 1)) {
            size = arr[i+1] - arr[i];
            ans = arr[i] + (size >> 1);
        }
    }
    cout << ans;
}