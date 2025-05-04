#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)
int arr[46];

int main() {
    IO;
    int n;
    cin >> n;
    arr[1] = arr[2] = 1;
    for (int i = 3; i <= n; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
    cout << arr[n];
}