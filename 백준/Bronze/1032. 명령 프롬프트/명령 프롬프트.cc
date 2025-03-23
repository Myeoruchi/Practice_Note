#include <iostream>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    int n;
    cin >> n;
    
    string ans, s;
    cin >> ans;
    while (--n) {
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (ans[i] != s[i]) { ans[i] = '?'; }
        }
    }
    cout << ans;
}