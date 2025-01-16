#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    string s;
    while (n--) {
        cin >> s;
        if (s.length() > 10) { continue; }
        int big = 0, sm = 0, num = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'a') { sm++; }
            else if (s[i] >= 'A') { big++; }
            else if (s[i] >= '0') { num++; }
        }
        if (big <= sm && num != s.length()) {
            cout << s;
            break;
        }
    }
    
}