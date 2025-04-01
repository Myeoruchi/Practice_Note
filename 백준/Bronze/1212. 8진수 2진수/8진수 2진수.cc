#include <iostream>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    string s, ans;
    cin >> s;
    for (const auto& c: s) {
        for (int i = 2; i >= 0; i--) {
            ans += ((c - '0') >> i) & 1 ? '1' : '0';
        }
    }
    for (int i = 0; i < ans.length(); i++) {
        if (ans[i] == '1') {
            ans = ans.substr(i, ans.length());
            break;
        }
    }
    if (ans.front() == '0') { ans = '0'; }
    cout << ans;
}