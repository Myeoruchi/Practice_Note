#include <iostream>
#include <cstring>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int dr[] = {0, -1, -1, -1};
int dc[] = {-1, -1, 0, 1};

int main() {
    IO;
    int n, m; cin >> n >> m;
    int arr[n][m], ans = 0;
    bool used[1001];
    memset(arr, 0, n * m * sizeof(int));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            memset(used, 0, 1001 * sizeof(bool));
            for (int k = 0; k < 4; k++) {
                int nr = i + dr[k];
                int nc = j + dc[k];
                if (nr < 0 || nr >= n || nc < 0 || nc >= m) { continue; }
                used[arr[nr][nc]] = 1;
            }
            for (int k = 1; k < 1001; k++) {
                if (!used[k]) {
                    ans = max(ans, k);
                    arr[i][j] = k;
                    break;
                }
            }
        }
    }
    
    cout << ans << '\n';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}