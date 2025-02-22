#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int p, n;
    cin >> p >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    
    int cnt = 0;
    for (; cnt < n; cnt++) {
        if (p >= 200) { break; }
        p += arr[cnt];
    }
    
    cout << cnt;
}