#include <iostream>
using namespace std;
using ll = long long;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n, m; cin >> n >> m;
    int arr[n];
    for (int &e: arr) { cin >> e; }
    
    int l = 0, r = 1e9, mid;
    while (l + 1 < r) {
        mid = (l + r) / 2;
        ll sum = 0;
        for (int &e: arr) { sum += e - mid > 0 ? e - mid : 0; }
        if (sum >= m) { l = mid; }
        else { r = mid; }
    }
    cout << l;
}