#include <iostream>
#include <algorithm>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int n;
    string s;
    while (cin >> n && n) {
        cin.ignore();
        getline(cin, s);
        string ans(s.length() - count(s.begin(), s.end(), ' '), 'A');
        int idx = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < ans.length(); j += n) {
                while (s[idx] == ' ') { idx++; }
                ans[j] = toupper(s[idx++]);
            }
        }
        cout << ans << '\n';
    }
}