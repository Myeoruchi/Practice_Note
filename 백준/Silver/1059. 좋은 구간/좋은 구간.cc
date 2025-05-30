#include <iostream>
#include <algorithm>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)
int arr[50];

int main() {
    IO;
    int l, n; cin >> l;
    for (int i = 0; i < l; i++) { cin >> arr[i]; }
    cin >> n;
    sort(arr, arr + l);
    
    int left = lower_bound(arr, arr + l, n) - arr;
    int right = upper_bound(arr, arr + l, n) - arr;
    int ans = 0;
    if (left == right) {
        if (left) { ans += (n - arr[left-1]) * (arr[right] - n) - 1; }
        else { ans += n * (arr[left] - n) - 1; }
    }
    cout << ans;
}