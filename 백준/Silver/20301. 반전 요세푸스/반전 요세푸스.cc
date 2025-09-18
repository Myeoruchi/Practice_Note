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
        if (reverse) {
            for (int i = 1; i < k; i++) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
            cout << dq.back() << '\n';
            dq.pop_back();
        }
        else {
            for (int i = 1; i < k; i++) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
            cout << dq.front() << '\n';
            dq.pop_front();
        }
        if (++cnt == m) {
            cnt = 0;
            reverse = !reverse;
        }
    }
}