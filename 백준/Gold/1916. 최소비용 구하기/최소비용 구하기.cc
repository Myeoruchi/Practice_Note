#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)
#define INF 0x3f3f3f3f

struct edge {
    int to, dist;
    edge(int a, int b): to(a), dist(b) {}
};

int main() {
    IO;
    int n, m, f, t, d, start, end;
    cin >> n >> m;
    vector<edge> v[n+1];
    vector<int> dist(n+1, INF);
    for (int i = 0; i < m; i++) {
        cin >> f >> t >> d;
        v[f].emplace_back(edge(t, d));
    }
    
    cin >> start >> end;
    dist[start] = 0;
    priority_queue<pair<int, int>> pq;
    pq.push({start, 0});
    while (!pq.empty()) {
        int node = pq.top().first, sum = pq.top().second;
        pq.pop();
        if (sum > dist[node]) { continue; }
        for (edge &e: v[node]) {
            if (dist[e.to] > e.dist + sum) {
                dist[e.to] = e.dist + sum;
                pq.push({e.to, dist[e.to]});
            }
        }
    }
    
    cout << dist[end];
}