#include <iostream>
#include <queue>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)
#define MAX 100000
bool visit[MAX+1];

int main() {
    IO;
    int n, k, time = 0, cnt = 0;
    cin >> n >> k;
    
    queue<int> q;
    q.push(n);
    visit[n] = true;
    while (!q.empty()) {
        int s = q.size();
        for (int i = 0; i < s; i++) {
            int p = q.front(); q.pop();
            if (p == k) { cnt++; continue; }
            
            visit[p] = true;
            if (p-1 >= 0 && !visit[p-1]) { q.push(p-1); }
            if (p+1 <= MAX && !visit[p+1]) { q.push(p+1); }
            if (p<<1 <= MAX && !visit[p<<1]) { q.push(p<<1); }
        }
        if (cnt) { break; }
        time++;
    }
    cout << time << '\n' << cnt;
}