#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n; cin >> n;
    int arr[n];
    for (int &e: arr) { cin >> e; }
    
    int l = 0, r = n - 1, mini = 2e9;
    pair<int, int> ans;
    while (l < r) {
        int sum = arr[l] + arr[r];
        if (mini > abs(sum)) {
            mini = abs(sum);
            ans = make_pair(arr[l], arr[r]);
        }
        if (sum > 0) { r--; }
        else if (sum < 0) { l++; }
        else { break; }
    }
    cout << ans.first << ' ' << ans.second;
}