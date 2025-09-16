#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n; cin >> n;
    int arr[n];
    for (int &e: arr) { cin >> e; }
    sort(arr, arr + n);
    
    ll sum = 0;
    for (int i = 1; i <= n; i++) { sum += abs(arr[i-1] - i); }
    cout << sum;
}