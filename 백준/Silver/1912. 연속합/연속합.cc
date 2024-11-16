#include <iostream>
#include <algorithm>
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
    
    for (int i = 1; i < n; i++) {
        sum[i] = arr[i] + max(sum[i-1], 0);
    }
    
    cout << *max_element(sum, sum+n);
    return 0;
}