#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)
bool visit[2][1001];
vector<int> v[1001];

void dfs(int node) {
    visit[0][node] = true;
    cout << node << ' ';
    for (int &e: v[node]) {
        if (!visit[0][e]) {
            dfs(e);
        }
    }
}

void bfs(int node) {
    queue<int> q;
    q.push(node);
    visit[1][node] = true;
    while (!q.empty()) {
        int n = q.front(); q.pop();
        cout << n << ' ';
        for (int &e: v[n]) {
            if (!visit[1][e]) {
                visit[1][e] = true;
                q.push(e);
            }
        }
    }
}


int main() {
    IO;
    int n, m, node, a, b;
    cin >> n >> m >> node;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        v[a].emplace_back(b);
        v[b].emplace_back(a);
    }
    for (int i = 1; i <= n; i++) { sort(v[i].begin(), v[i].end()); }
    
    dfs(node);
    cout << '\n';
    bfs(node);
}