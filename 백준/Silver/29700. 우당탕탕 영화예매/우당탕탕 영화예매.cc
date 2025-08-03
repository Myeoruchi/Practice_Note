#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n, m, k;
    cin >> n >> m >> k;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        int seat = 0;
        for (int idx = 0; idx < k; idx++) {
            seat += s[idx] - '0';
        }
        if (seat == 0) { sum++; }
        for (int idx = k; idx < m; idx++) {
            seat += s[idx] - s[idx - k];
            if (seat == 0) { sum++; }
        }
    }
    cout << sum;
}