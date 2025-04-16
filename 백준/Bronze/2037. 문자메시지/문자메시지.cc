#include <iostream>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int num[] = { 2,2,2, 3,3,3, 4,4,4, 5,5,5, 6,6,6, 7,7,7,7, 8,8,8, 9,9,9,9 };
int cnt[] = { 1,2,3, 1,2,3, 1,2,3, 1,2,3, 1,2,3, 1,2,3,4, 1,2,3, 1,2,3,4 };

int main() {
    FAST_IO;
    int p, w, prev = 0, ans = 0;
    string s;
    cin >> p >> w;
    cin.ignore();
    getline(cin, s);    
    for (const auto &c: s) {
        if (c == ' ') { ans += p; prev = 0; }
        else if (num[c - 'A'] == prev) {
            ans += cnt[c - 'A'] * p + w;
        }
        else {
            ans += cnt[c - 'A'] * p;
            prev = num[c - 'A'];
        }
    }
    cout << ans;
}