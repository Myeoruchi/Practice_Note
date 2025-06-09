#include <iostream>
#include <vector>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

bool p[4'000'001];

int main() {
    IO;
    int n; cin >> n;
    vector<int> v;
    for (int i = 2; i <= n; i++) {
        if (!p[i]) {
            v.emplace_back(i);
            if (i > 2e3) { continue; }
            for (int j = i * i; j <= n; j += i) { p[j] = true; }
        }
    }
    
    int sum = 0, j = 0, ans = 0;
    for (int i = 0; i < v.size(); i++) {
        while (j < v.size() && sum < n) { sum += v[j++]; }
        if (sum == n) { ans++; }
        sum -= v[i];
    }
    cout << ans;
}