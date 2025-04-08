#include <iostream>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    int t;
    cin >> t;
    
    double ch[2], target;
    int cnt[2];
    char c;
    while (t--) {
        cin >> ch[0] >> ch[1] >> c >> target;
        ch[0] *= 1000, ch[1] *= 1000, target *= 1000;
        for (int i = 0; i < 2; i++) {
            cnt[i] = 6;
            if (ch[i] == target) { cnt[i] = 0; }
            else if (int(target) % 20 == 0) {
                if (ch[i] < 144100) { cnt[i] = (146000 - target) / 20 + (ch[i] - 144000) / 20 + 1; }
                else if (ch[i] > 145900) { cnt[i] = (target - 144000) / 20 + (146000 - ch[i]) / 20 + 1; }
                if (int(ch[i]) % 20 == 0) { cnt[i] = min(int(abs(ch[i] - target) / 20), cnt[i]); }
                cnt[i] = min(cnt[i], 6);
            }
            else if (int(ch[i]) % 20 == int(target) % 20) { cnt[i] = min(int(abs(ch[i] - target) / 20), cnt[i]); }
            if ('A' + i != c) { cnt[i]++; }
        }
        cout << min(cnt[0], cnt[1]) << '\n';
    }
}