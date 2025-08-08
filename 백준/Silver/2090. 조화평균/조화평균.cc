#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
#define IO cin.tie(0)->sync_with_stdio(0)

int arr[10];

int main() {
    IO;
    int n; cin >> n >> arr[0];
    ll lcd = arr[0];
    for (int i = 1; i < n; i++) {
        cin >> arr[i];
        lcd = lcd * arr[i] / __gcd(lcd, (ll)arr[i]);
    }
    
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += lcd / arr[i];
    }
    
    int gcd = __gcd(sum, lcd);
    cout << lcd / gcd << '/' << sum / gcd;
}