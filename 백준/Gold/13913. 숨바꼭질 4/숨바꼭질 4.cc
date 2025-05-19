#include <iostream>
#include <queue>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)
#define MAX 100000
bool visit[MAX+1];
int from[MAX+1];

int main() {
    IO;
    int n, k;
    cin >> n >> k;
    
    queue<pair<int, int>> q;
    q.push({n, 0});
    visit[n] = true;
    from[n] = -1;
    while (!q.empty()) {
        int p = q.front().first, t = q.front().second;
        if (p == k) { cout << t << '\n'; break; }
        q.pop();
        
        int next[3] = {p-1, p+1, p<<1};
        for (int i: next) {
            if (i < 0 || i > MAX || visit[i]) { continue; }
            visit[i] = true;
            from[i] = p;
            q.push({i, t+1});
        }
    }
    
    vector<int> ans;
    int p = q.front().first;
    ans.emplace_back(p);
    while (from[ans.back()] != -1) { ans.emplace_back(from[ans.back()]); }
    for (int i = ans.size() - 1; i >= 0; i--) { cout << ans[i] << ' '; }
}