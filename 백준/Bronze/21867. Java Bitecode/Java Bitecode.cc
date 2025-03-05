#include <iostream>
using namespace std;

int main() {
    int n;
    string s, ans;
    cin >> n >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'A' || s[i] == 'J' || s[i] == 'V') { continue; }
        ans += s[i];
    }
    if (ans.length()) { cout << ans; }
    else { cout << "nojava"; }
}