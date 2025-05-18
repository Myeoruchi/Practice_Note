#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int arr[100][100];
bool visit[100][100];

int main() {
    IO;
    int n, m, d;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    cin >> d;
    
    queue<pair<int, int>> q;
    q.push({0, 0});
    visit[0][0] = true;
    while (!q.empty()) {
        auto t = q.front();
        int x = t.first, y = t.second;
        q.pop();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!visit[i][j] && arr[i][j] == arr[x][y] && abs(i - x) + abs(j - y) <= d) {
                    visit[i][j] = true;
                    q.push({i, j});
                }
            }
        }
    }
    cout << (visit[n-1][m-1] ? "ALIVE" : "DEAD");
}