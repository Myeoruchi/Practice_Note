#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int n, c, w, maxi;
    ll ans = 0, sum;
    cin >> n >> c >> w;
    vector<int> v(n);
    for (int &e: v) { cin >> e; }
    maxi = *max_element(v.begin(), v.end());
    
    for (int i = 1; i <= maxi; i++) {
        sum = 0;
        for (int &e: v) {
            int t = e / i * i * w - (e - 1) / i * c;
            sum += t > 0 ? t : 0;
        }
        ans = max(ans, sum);
    }
    cout << ans;
}