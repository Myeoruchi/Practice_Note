#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, k;
    cin >> n >> k;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        cin.get();
    }
    
    while (k--) {
        n--;
        for (int i = 0; i < n; i++) {
            arr[i] = arr[i+1] - arr[i];
        }
    }
    
    string ans;
    for (int i = 0; i < n; i++) {
        ans += to_string(arr[i]) + ',';
    }
    ans.pop_back();
    
    cout << ans;
    return 0;
}