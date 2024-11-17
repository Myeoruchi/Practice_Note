#include <iostream>
using namespace std;

int dRow[4] = {-1, 0, 1, 0};
int dCol[4] = {0, 1, 0, -1};

int n;

bool inRange(int a, int b) {
    return 1 <= a && a <= n && 1 <= b && b <= n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;

    int arr[n+1][n+1], res[n+1][n+1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
        }
    }

    int r, c;
    cin >> r >> c;

    int cnt = arr[r][c];
    arr[r][c] = 0;
    for (int i = 1; i < cnt; i++) {
        for (int j = 0; j < 4; j++) {
            int nr = r + i * dRow[j], nc = c + i * dCol[j];
            if (inRange(nr, nc)) {
                arr[nr][nc] = 0;
            }
        }
    }

    for (int j = 1; j <= n; j++) {
        int idx = n;
        for (int i = n; i >= 1; i--) {
            if (arr[i][j]) { res[idx][j] = arr[i][j]; idx--; }
        }
        for (int i = idx; i >= 1; i--) {
            res[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << res[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}