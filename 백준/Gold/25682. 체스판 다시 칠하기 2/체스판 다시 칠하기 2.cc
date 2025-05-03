#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int n, m, k;
    cin >> n >> m >> k;
    vector<string> v(n);
    vector<vector<int>> sum(n+1, vector<int> (m+1));
    for (string &s: v) { cin >> s; }
    
    char cmp = 'B';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum[i+1][j+1] = sum[i+1][j] + sum[i][j+1] - sum[i][j] + (cmp != v[i][j]);
            cmp = cmp == 'B' ? 'W' : 'B';
        }
        cmp = i % 2 ? 'B' : 'W';
    }
    
    int res = k * k, maxi = k * k;
    for (int i = k; i <= n; i++) {
        for (int j = k; j <= m; j++) {
            int tmp = sum[i][j] - sum[i-k][j] - sum[i][j-k] + sum[i-k][j-k];
            res = min({res, tmp, maxi - tmp});
        }
    }
    cout << res;
}