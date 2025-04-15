#include <iostream>
#include <algorithm>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    int n, k, num = 0;
    cin >> n >> k;
    string s;
    while (s.length() <= n * 4 + k) {
        int tn = num;
        string ts;
        do {
            ts += tn & 1 ? '1' : '0';
            tn >>= 1;
        } while (tn);
        reverse(ts.begin(), ts.end());
        s += ts;
        num++;
    }
    for (int i = 0; i < 5; i++) {
        cout << s[i * n + k - 1] << ' ';
    }
}