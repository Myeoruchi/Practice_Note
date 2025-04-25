#include <iostream>
#include <vector>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int n, m, arr[500000];
    cin >> n >> m;
    for (int &e: arr) { cin >> e; }
    
    int ans = 0, sum = 0;
    for (int i = 0, j = 0; i < n; i++) {
        sum += arr[i];
        while (sum > m) { sum -= arr[j++]; }
        ans = max(ans, sum);
    }
    cout << ans;
}