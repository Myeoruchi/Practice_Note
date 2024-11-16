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
    sum[2] = arr[2] + max(arr[0], arr[1]);
    sum[3] = arr[3] + max(arr[2] + arr[0], sum[1]);
    
    for (int i = 4; i < n; i++) {
        sum[i] = arr[i] + max(arr[i-1] + max(sum[i-3], sum[i-4]), sum[i-2]);
    }
    
    cout << max(sum[n-1], sum[n-2]);
    return 0;
}