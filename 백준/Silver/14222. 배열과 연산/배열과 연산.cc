#include <iostream>
#include <algorithm>>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    int n, k;
    cin >> n >> k;
    int arr[n+1];
    bool exist[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        exist[i] = false;
    }
    int i;
    for (i = 1; i <= n; i++) {
        while (arr[i] <= n) {
            if (exist[arr[i]]) { arr[i] += k; }
            else { exist[arr[i]] = true; break; }
        }
        if (arr[i] > n) { break; }
    }
    if (i > n) { cout << 1; }
    else { cout << 0; }
}