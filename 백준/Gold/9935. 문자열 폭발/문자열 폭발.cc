#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string str, str2, ans;
    cin >> str >> str2;
    
    for (int i = 0; i < str.size(); i++) {
        if (ans.size() < str2.size()) {
            int diff = str2.size() - ans.size();
            if (i + diff > str.size()) {
                ans += str.substr(i);
                break;
            }
            ans += str.substr(i, diff);
            i += diff - 1;
        }
        else { ans += str[i]; }
        if (ans.back() == str2.back()) {
            if (ans.compare(ans.size() - str2.size(), str2.size(), str2) == 0) {
                ans.erase(ans.size() - str2.size(), str2.size());
            }
        }
    }
    
    if (ans.empty()) { cout << "FRULA"; }
    else { cout << ans; }
    
    return 0;
}