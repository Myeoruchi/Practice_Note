#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k, min = 0;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = n-1; i >= 0; i--) {
        min += k / arr[i];
        k = k % arr[i];
    }
    cout << min;
}