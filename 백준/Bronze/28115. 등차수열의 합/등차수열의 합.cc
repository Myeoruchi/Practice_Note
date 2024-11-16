#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    if (n == 1) { cout << "YES\n" << arr[0] << '\n' << 0; }
    else {
        string ans = to_string(arr[0]) + ' ';
        int prev = arr[1] - arr[0];
        for (int i = 1; i < n; i++) {
            if (prev == arr[i] - arr[i-1]) { ans += to_string(arr[i]) + ' '; }
            else { cout << "NO"; return 0; }
        }
        ans += '\n';
        for (int i = 0; i < n; i++) { ans += "0 "; }
        cout << "YES\n" << ans;
    }
    return 0;
}