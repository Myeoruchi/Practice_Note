#include <iostream>
#include <unordered_map>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
        int n, x, tmp;
        long long cnt = 0;
        cin >> n >> x;
        unordered_map<int, int> um;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            um[tmp]++;
        }
        for (const auto& n: um) {
            if (x && um.find(n.first ^ x) != um.end()) {
                cnt += (long long)n.second * um[n.first ^ x];
            }
            else if (!x) { cnt += (long long)n.second * (n.second - 1); }
        }
        cout << (cnt >> 1) << '\n';
    }
}