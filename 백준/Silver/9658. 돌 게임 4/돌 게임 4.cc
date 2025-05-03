#include <iostream>
#include <algorithm>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int arr[1001];

int main() {
    IO;
    int n;
    cin >> n;
    arr[2] = 1, arr[4] = 1;
    for (int i = 5; i <= n; i++) {
        arr[i] = min({arr[i-1], arr[i-3], arr[i-4]}) ==
                  max({arr[i-1], arr[i-3], arr[i-4]}) ? !arr[i-1] : 1;
    }
    cout << (arr[n] == 1 ? "SK" : "CY");
}