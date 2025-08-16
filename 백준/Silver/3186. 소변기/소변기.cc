#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int k, l, n;
    string s;
    cin >> k >> l >> n >> s;
    
    bool flush = false;
    int kCnt = 0, lCnt = 0;
    for (int i = 0; i < n; i++) {
        if (kCnt == k) {
            if (s[i] == '0') { lCnt++; }
            else { lCnt = 0; }
            if (lCnt == l) {
                if (!flush) { flush = true; }
                kCnt = lCnt = 0;
                cout << i + 1 << '\n';
            }
        }
        else if (s[i] == '1') { kCnt++; }
        else { kCnt = 0; }
    }
    if (kCnt == k) { cout << n + (l - lCnt); }
    else if (!flush) { cout << "NIKAD"; }
}