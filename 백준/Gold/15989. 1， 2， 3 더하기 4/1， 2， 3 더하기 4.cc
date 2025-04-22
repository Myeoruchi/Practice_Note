#include <iostream>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)
int arr[10001];

int main() {
    FAST_IO;
    arr[1] = 1, arr[2] = 2, arr[3] = 3;
    for (int i = 4; i <= 10000; i++) {
        arr[i] = arr[i-2] + arr[i-1] - arr[i-3] + !(i % 3);
    }
    
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << arr[n] << '\n';
    }
}