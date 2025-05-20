#include <iostream>
#include <cstring>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int arr[50][50];
bool visit[50][50];

int dx[] = { 0, 1, 0, -1 };
int dy[] = { -1, 0, 1, 0 };

int n, m;

void dfs(int x, int y) {
    visit[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) { continue; }
        if (arr[nx][ny] && !visit[nx][ny]) { dfs(nx, ny); }
    }
}

int main() {
    IO;
    int t; cin >> t;
    while (t--) {
        int k; cin >> n >> m >> k;
        memset(arr, 0, 50 * 50 * sizeof(int));
        memset(visit, 0, 50 * 50 * sizeof(bool));
        while (k--) {
            int x, y; cin >> x >> y;
            arr[x][y] = 1;
        }
        
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i][j] && !visit[i][j]) {
                    dfs(i, j);
                    ans++;
                }
            }
        }
        cout << ans << '\n';
    }
}