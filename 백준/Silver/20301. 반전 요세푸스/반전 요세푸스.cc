#include <iostream>
#include <deque>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    deque<int> dq;
    int n, k, m; cin >> n >> k >> m;
    for (int i = 1; i <= n; i++) { dq.push_back(i); }
    
    bool reverse = false;
    int cnt = 0;
    while (n--) {
        for (int i = 1; i <= k; i++) {
            if (reverse) {
                int t = dq.back();
                dq.pop_back();
                if (i < k) { dq.push_front(t); }
                else { cout << t << '\n'; }
            }
            else {
                int t = dq.front();
                dq.pop_front();
                if (i < k) { dq.push_back(t); }
                else { cout << t << '\n'; }
            }
        }
        if (++cnt == m) {
            cnt = 0;
            reverse = !reverse;
        }
    }
}