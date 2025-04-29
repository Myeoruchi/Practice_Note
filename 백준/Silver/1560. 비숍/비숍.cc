#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    string n;
    cin >> n;
    if (n == "1") { cout << 1; }
    else {
        int idx, carry = 0;
        for (idx = n.size() - 1; idx >= 0; idx--) {
            if (n[idx] != '0') { n[idx++]--; break; }
        }
        for (idx; idx < n.size(); idx++) { n[idx] = '9'; }
        for (idx = n.size() - 1; idx >= 0; idx--) {
            int t = (n[idx] - '0') * 2 + carry;
            carry = t / 10;
            n[idx] = (t % 10) + '0';
        }
        if (carry) { cout << 1; }
        cout << n;
    }
}