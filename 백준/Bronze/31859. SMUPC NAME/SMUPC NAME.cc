#include <iostream>
#include <algorithm>
using namespace std;

bool arr[26];

int main() {
    int n;
    string ans, s;
    cin >> n >> s;
    for (int i = 0; i < s.length(); i++) {
        if (!arr[s[i] - 'a']) {
            ans += s[i];
            arr[s[i] - 'a'] = true;
        }
    }
    ans += to_string(s.length() - ans.length() + 4) + "_cpums";
    ans = to_string(1906 + n) + ans;
    reverse(ans.begin(), ans.end());
    cout << ans;
}