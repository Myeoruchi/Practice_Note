#include <iostream>
#include <queue>
using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int arr[1000][1000];
bool visit[1000][1000];
int n, m;

bool inRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < m;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n >> m;
    
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 2) {
                q.push({i, j});
                visit[i][j] = true;
                arr[i][j] = 0;
            }
        }
    }
    
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (inRange(nx, ny) && visit[nx][ny] == false && arr[nx][ny] == 1) {
                q.push({nx, ny});
                visit[nx][ny] = true;
                arr[nx][ny] = arr[x][y] + 1;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (visit[i][j] == false && arr[i][j] != 0) { cout << "-1 "; }
            else { cout << arr[i][j] << ' '; }
        }
        cout << '\n';
    }
}