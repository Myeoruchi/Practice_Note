#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int n;

bool isRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int cnt;
    cin >> cnt;
    
    while (cnt--) {
        cin >> n;
        int dist[n][n];
        memset(dist, -1, sizeof(dist));
    
        int r, c, lastR, lastC;
        cin >> r >> c >> lastR >> lastC;
    
        queue<pair<int, int>> q;
        q.push({r, c});
        dist[r][c] = 0;
    
        while (!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            if (x == lastR && y == lastC) { cout << dist[x][y] << '\n'; break; }
            q.pop();
            for (int i = 0; i < 8; i++) {
                int nx = x + dx[i], ny = y + dy[i];
                if (isRange(nx, ny) && dist[nx][ny] == -1) {
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }
    }
    return 0;
}