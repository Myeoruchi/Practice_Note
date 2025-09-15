#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

bool arr[100'001];

int main() {
    IO;
    int n; cin >> n;
    int ans = 0, cur = 0;
    for (int i = 0; i < n * 2; i++) {
        int t; cin >> t;
        if (arr[t]) { cur--; }
        else {
            arr[t] = true;
            ans = max(ans, ++cur);
        }
    }
    cout << ans;
}