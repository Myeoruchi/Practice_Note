#include <iostream>
#include <queue>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m, r, g, b, boundary;
    cin >> n >> m;
    int arr[n][m];
    bool visit[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> r >> g >> b;
            arr[i][j] = (r + g + b) / 3;
            visit[i][j] = false;
        }
    }
    cin >> boundary;
    
    int cnt = 0;
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (visit[i][j] || arr[i][j] < boundary) { continue; }
            q.push({i, j});
            visit[i][j] = true;
            cnt++;
            while (!q.empty()) {
                int x = q.front().first, y = q.front().second;
                q.pop();
                for (int k = 0; k < 4; k++) {
                    int nx = x + dx[k], ny = y + dy[k];
                    if (0 <= nx && nx < n &&
                        0 <= ny && ny < m &&
                        arr[nx][ny] >= boundary &&
                        !visit[nx][ny]) {
                        q.push({nx, ny});
                        visit[nx][ny] = true;
                    }
                }
            }
        }
    }
    cout << cnt;
}