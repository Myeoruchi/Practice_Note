#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)
int arr[1000001];

int main() {
    int t, n;
    cin >> t;
    vector<int> v(t);
    for (int &e: v) { cin >> e; }
    int max = *max_element(v.begin(), v.end());
    
    arr[1] = 1, arr[2] = 2, arr[3] = 3;
    for (int i = 4; i <= max; i++) {
        arr[i] = arr[i-2] + arr[i-1] - arr[i-3] + !(i % 3);
    }
    
    for (const int &e: v) {
        cout << arr[e] << '\n';
    }
}