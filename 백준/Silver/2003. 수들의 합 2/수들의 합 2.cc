#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int cnt = 0, firstIdx = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        while (sum > m) { sum -= arr[firstIdx++]; }
        if (sum == m) { cnt++; }
    }
    
    cout << cnt;
}