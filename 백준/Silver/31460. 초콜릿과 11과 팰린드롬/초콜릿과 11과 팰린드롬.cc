#include <iostream>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        string ans = "0";
        while (--n) {
            ans[ans.length()-1]++;
            ans += '1';
        }
        cout << ans << '\n';
    }
}