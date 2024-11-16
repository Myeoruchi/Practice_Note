#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    int arr[n], sum[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sum[0] = arr[0];
    sum[1] = arr[1] + arr[0];
    sum[2] = max(sum[1], arr[2] + max(arr[0], arr[1]));
    
    for (int i = 3; i < n; i++) {
        sum[i] = max(sum[i-1], arr[i] + max(sum[i-2], arr[i-1] + sum[i-3]));
    }
    
    cout << sum[n-1];
    return 0;
}