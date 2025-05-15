#include <iostream>
using namespace std;
#define IO ios::sync_with_stdio(0), cin.tie(0)

int arr[12] = {5};

int main() {
    IO;
    int m; cin >> m;
    for (int i = 1; i < 12; i++) {
        arr[i] = arr[i-1] * 5;
    }
    
    int l = 0, r = 1e9, mid;
    while (l + 1 < r) {
        mid = (l + r) / 2;
        int cnt = 0;
        for (int i = 0; i < 12; i++) {
            cnt += mid / arr[i];
        }
        if (cnt < m) { l = mid; }
        else { r = mid; }
    }
    for (int i = 0; i < 12; i++) {
        m -= r / arr[i];
    }
    cout << (m ? -1 : r);
}