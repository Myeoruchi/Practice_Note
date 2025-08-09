#include <iostream>
#include <algorithm>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n, e; cin >> n >> e;
    int arr[n];
    for (int &e: arr) { cin >> e; }
    sort(arr, arr+n);
    
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i-1] + e <= arr[i]) { cnt++; }
    }
    cout << cnt;
}