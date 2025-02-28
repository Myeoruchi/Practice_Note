#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m, sum = 0;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    
    m = min(m, (n+1)/2);
    while (m != 0 && arr[n-m] <= 0) { m--; }
    
    for (int i = n-m; i < n; i++) {
        sum += arr[i];
    }
    cout << sum;
}