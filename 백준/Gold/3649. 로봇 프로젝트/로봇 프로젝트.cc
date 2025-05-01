#include <iostream>
#include <algorithm>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int arr[1000000];

int main() {
    IO;
    int x, n;
    while (cin >> x >> n) {
        for (int i = 0; i < n; i++) { cin >> arr[i]; }
        sort(arr, arr + n);
        int i = 0, j = n - 1;
        x *= 10000000;
        while (i < j) {
            if (arr[i] + arr[j] == x) { break; }
            if (arr[i] + arr[j] < x) { i++; }
            else { j--; }
        }
        if (i < j) { cout << "yes " << arr[i] << ' ' << arr[j] << '\n'; }
        else { cout << "danger\n"; }
    }
}