#include <iostream>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int alpha[26];

int main() {
    FAST_IO;
    int n;
    string s, ans;
    cin >> n;
    while (n--) {
        cin >> s;
        alpha[s.front() - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (alpha[i] >= 5) { ans += char(i + 'a'); }
    }
    if (ans.length() > 0) { cout << ans; }
    else { cout << "PREDAJA"; }
}