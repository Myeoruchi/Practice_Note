#include <iostream>
#include <queue>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)
#define MAX 100000
bool visit[MAX+1];

int main() {
    IO;
    int n, k;
    cin >> n >> k;
    
    queue<pair<int, int>> q;
    q.push({n, 0});
    visit[n] = true;
    while (!q.empty()) {
        int p = q.front().first, t = q.front().second; q.pop();
        if (p == k) { cout << t; break; }
        if (p<<1 <= MAX && !visit[p<<1]) { visit[p<<1] = true; q.push({p<<1, t}); }
        if (p-1 >= 0 && !visit[p-1]) { visit[p-1] = true; q.push({p-1, t+1}); }
        if (p+1 <= MAX && !visit[p+1]) { visit[p+1] = true; q.push({p+1, t+1}); }
    }
}