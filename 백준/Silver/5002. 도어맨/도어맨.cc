#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int max_diff, diff = 0, ans = 0;
    string wait;
    cin >> max_diff >> wait;
    
    if (max_diff) {
        for (int i = 0; i < wait.length(); i++) {
            if (abs(diff) > max_diff) { break; }
            if (i+1 < wait.length() && wait[i] != wait[i+1]) {
                i++;
                ans += 2;
            }
            else {
                diff += wait[i] == 'M' ? 1 : -1;
                if (abs(diff) <= max_diff) { ans++; }
            }
        }
    }
    cout << ans;
}