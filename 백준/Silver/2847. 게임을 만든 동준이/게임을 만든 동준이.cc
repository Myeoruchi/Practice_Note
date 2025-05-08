#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int arr[100];

int main() {
    IO;
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) { cin >> arr[i]; }
    for (int i = n-1; i > 0; i--) {
        if (arr[i-1] >= arr[i]) {
            cnt += arr[i-1] - arr[i] + 1;
            arr[i-1] = arr[i] - 1;
        }
    }
    cout << cnt;
}