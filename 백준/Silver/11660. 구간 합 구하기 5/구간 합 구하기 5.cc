#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int sum[1025][1025];

int main() {
    IO;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> sum[i][j];
            sum[i][j] += sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1];
        }
    }
    int x1, x2, y1, y2;
    while (m--) {
        cin >> x1 >> y1 >> x2 >> y2;
        cout << sum[x2][y2] - sum[x1-1][y2] - sum[x2][y1-1] + sum[x1-1][y1-1] << '\n';
    }
}