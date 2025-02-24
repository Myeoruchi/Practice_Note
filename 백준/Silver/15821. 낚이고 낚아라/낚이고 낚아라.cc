#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, k;
    cin >> n >> k;
    long long arr[n];
    
    int p;
    long long x, y;
    for (int i = 0; i < n; i++) {
        cin >> p;
        long long maximum = 0;
        for (int t = 0; t < p; t++) {
            cin >> x >> y;
            maximum = max(maximum, x*x + y*y);
        }
        arr[i] = maximum;
    }
    sort(arr, arr+n);
    
    cout << arr[k-1] << ".00";
}