#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    for (int t = 0; t < 3; t++) {
        string s; cin >> s;
        int ans = 0, len = 0;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i-1]) { len++; }
            else { len = 0; }
            ans = max(ans, len);
        }
        cout << ans + 1 << '\n';
    }
}