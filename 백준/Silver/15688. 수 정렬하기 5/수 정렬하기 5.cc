#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    string ans;
    for (int i = 0; i < n; i++) {
        ans += to_string(arr[i]) + '\n';
    }
    cout << ans;
}