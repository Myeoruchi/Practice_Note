#include <iostream>
#include <queue>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)
int arr[1000][1000];
int dr[4] = { 0, 1, 0, -1 };
int dc[4] = { -1, 0, 1, 0 };

struct tomato {
    int r, c, t;
    tomato(int a, int b, int c): r(a), c(b), t(c) {}
};

int main() {
    IO;
    int n, m; cin >> m >> n;
    queue<tomato> q;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) { q.push(tomato(i, j, 0)); }
        }
    }
    
    int ans = 0;
    while (!q.empty()) {
        tomato tmt = q.front(); q.pop();
        ans = max(ans, tmt.t);
        for (int i = 0; i < 4; i++) {
            int nr = tmt.r + dr[i];
            int nc = tmt.c + dc[i];
            if (nr < 0 || nr >= n || nc < 0 || nc >= m) { continue; }
            if (arr[nr][nc] == 0) {
                q.push(tomato(nr, nc, tmt.t + 1));
                arr[nr][nc] = 1;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) { ans = -1; break; }
        }
        if (ans == -1) { break; }
    }
    cout << ans;
}