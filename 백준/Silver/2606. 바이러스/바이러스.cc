#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> v;
vector<bool> visit;
int cnt;

void dfs(int node) {
    visit[node] = true;
    for (int i = 0; i < v[node].size(); i++) {
        int newN = v[node][i];
        if (!visit[newN]) {
            cnt++;
            dfs(newN);
        }
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    v.resize(n+1);
    visit.resize(n+1);
    
    int a, b;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        v[a].emplace_back(b);
        v[b].emplace_back(a);
    }
    dfs(1);
    cout << cnt;
}