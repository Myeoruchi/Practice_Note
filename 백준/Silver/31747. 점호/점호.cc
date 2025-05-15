#include <iostream>
#include <queue>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int n, k; cin >> n >> k;
    queue<int> q[2];
    
    int t;
    for (int i = 0; i < n; i++) {
        cin >> t;
        q[t-1].push(i);
    }
    
    int idx = 0, cnt = 0;
    for (int i = 0; i < n; i = idx) {
        t = min(k, int(q[0].size() + q[1].size()));
        for (int j = 0; j < 2; j++) {
            if (!q[j].empty() && q[j].front() < i + t) {
                q[j].pop();
                idx++;
            }
        }
        cnt++;
    }
    cout << cnt;
}