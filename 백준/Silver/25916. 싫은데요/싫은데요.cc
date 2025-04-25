#include <iostream>
#include <vector>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int &e: v) { cin >> e; }
    
    int ans = 0, sum = 0;
    for (int i = 0, j = 0; i < n; i++) {
        sum += v[i];
        while (sum > m) { sum -= v[j++]; }
        ans = max(ans, sum);
    }
    cout << ans;
}