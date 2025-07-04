#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

bool is_pal(string &s) {
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] != s[len - i - 1]) { return false; }
    }
    return true;
}

int main() {
    IO;
    int n; cin >> n;
    int cnt = 0;
    while (n--) {
        string s; cin >> s;
        if (is_pal(s)) { cnt++; }
    }
    cout << (cnt ? cnt * (cnt - 1) : 0);
}