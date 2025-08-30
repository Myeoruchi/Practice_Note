#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    string ans;
    for (int i = 0; i < 2; i++) {
        string s; cin >> s;
        int flg = 0;
        for (char c: s) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                if (!flg) { flg = 1; }
            }
            else if (flg) { flg = 2; break; }
            ans += c;
        }
        if (flg != 2) { cout << "no such exercise"; exit(0); }
    }
    cout << ans;
}