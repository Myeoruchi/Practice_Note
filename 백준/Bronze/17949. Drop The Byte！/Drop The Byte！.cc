#include <iostream>
using namespace std;
using ll = long long;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    string s, t;
    int n, size, idx = 0;
    cin >> s >> n;
    while (n--) {
        cin >> t;
        if (t[0] == 'c') { size = 2; }
        else if (t[0] == 'i') { size = 8; }
        else { size = 16; }
        
        ll sum = 0;
        for (int i = idx + size - 1, cnt = 0; i >= idx; i--, cnt++) {
            sum += (s[i] >= 'a' ? s[i] - 'a' + 10 : s[i] - '0') * (ll(1) << (cnt * 4));
        }
        cout << sum << ' ';
        idx += size;
    }
}