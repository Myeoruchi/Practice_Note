#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    int arr[n], sum[n-k+1];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sum[0] = 0;
    for (int i = 0; i < k; i++) {
        sum[0] += arr[i];
    }
    
    for (int i = 1; i < n-k+1; i++) {
        sum[i] = sum[i-1] - arr[i-1] + arr[i+k-1];
    }
    
    cout << *max_element(sum, sum+n-k+1);
    return 0;
}