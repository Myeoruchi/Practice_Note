#include <iostream>
#include <algorithm>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n, s; cin >> n >> s;
    int arr[n];
    for (int &e: arr) { cin >> e; }
    sort(arr, arr + n);
    
    int ans = 0;
    int r = n - 1;
    for (int l = 0; l < r; l++) {
        while (arr[l] + arr[r] > s) { r--; }
        if (l < r) { ans += r - l; }
    }
    cout << ans;
}