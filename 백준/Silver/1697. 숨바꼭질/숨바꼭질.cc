#include <iostream>
#include <queue>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)
#define MAX 100000
bool visit[MAX+1];

int main() {
    IO;
    int n, k, time = 0;
    cin >> n >> k;
    
    queue<pair<int, int>> q;
    q.push({n, time});
    visit[n] = true;
    while (!q.empty()) {
        int p = q.front().first, t = q.front().second;
        if (p == k) { cout << t; break; }
        q.pop();
        if (p-1 >= 0 && !visit[p-1]) { visit[p-1] = true; q.push({p-1, t+1}); }
        if (p+1 <= MAX && !visit[p+1]) { visit[p+1] = true; q.push({p+1, t+1}); }
        if (p<<1 <= MAX && !visit[p<<1]) { visit[p<<1] = true; q.push({p<<1, t+1}); }
    }
}