#include <iostream>
#include <queue>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)
int arr[100][100][100];
int dr[6] = { 0, 1, 0, -1, 0, 0 };
int dc[6] = { -1, 0, 1, 0, 0, 0 };
int dh[6] = { 0, 0, 0, 0, 1, -1 };

struct tomato {
    int r, c, h, t;
    tomato(int a, int b, int c, int d): r(a), c(b), h(c), t(d) {}
};

int main() {
    IO;
    int n, m, h;
    cin >> m >> n >> h;
    queue<tomato> q;
    for (int k = 0; k < h; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[k][i][j];
                if (arr[k][i][j] == 1) { q.push(tomato(i, j, k, 0)); }
            }
        }
    }
    
    int ans = 0;
    while (!q.empty()) {
        tomato tmt = q.front(); q.pop();
        ans = max(ans, tmt.t);
        for (int i = 0; i < 6; i++) {
            int nr = tmt.r + dr[i];
            int nc = tmt.c + dc[i];
            int nh = tmt.h + dh[i];
            if (nh < 0 || nh >= h || nr < 0 || nr >= n || nc < 0 || nc >= m) { continue; }
            if (arr[nh][nr][nc] == 0) {
                q.push(tomato(nr, nc, nh, tmt.t + 1));
                arr[nh][nr][nc] = 1;
            }
        }
    }
    
    for (int k = 0; k < h; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[k][i][j] == 0) { cout << -1; exit(0); }
            }
        }
    }
    cout << ans;
}