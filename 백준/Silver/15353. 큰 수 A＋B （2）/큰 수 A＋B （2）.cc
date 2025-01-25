#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string a, b, ans;
    cin >> a >> b;
    if (a.length() < b.length()) { swap(a, b); }
    
    int add = 0, sum;
    for (int i = 1; i <= b.length(); i++) {
        sum = add + a[a.length()-i] - '0' + b[b.length()-i] - '0';
        ans += sum % 10 + '0';
        add = sum / 10;
    }
    if (a.length() > b.length()) {
        for (int i = a.length()-ans.length()-1; i >= 0; i--) {
            sum = add + a[i] - '0';
            ans += sum % 10 + '0';
            add = sum / 10;
        }
    }
    if (add) { ans += add + '0'; }
    
    reverse(ans.begin(), ans.end());
    cout << ans;
}