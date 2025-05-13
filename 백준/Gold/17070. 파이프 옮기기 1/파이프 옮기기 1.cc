#include <iostream>
#include <vector>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

struct tri {
    int garo, sero, dae;
    
    tri() { garo = sero = dae = 0; }
    tri(int g, int s, int d): garo(g), sero(s), dae(d) {}
    int gSum() { return garo + dae; }
    int sSum() { return sero + dae; }
    int dSum() { return garo + sero + dae; }
};

int main() {
    IO;
    int n;
    cin >> n;
    vector<vector<int>> v(n+1, vector<int> (n+1));
    vector<vector<tri>> dp(n+1, vector<tri> (n+1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> v[i][j];
        }
    }
    
    dp[1][2].garo = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 3; j <= n; j++) {
            if (!v[i][j]) {
                dp[i][j] = tri(dp[i][j-1].gSum(), 
                               dp[i-1][j].sSum(), 
                               v[i-1][j] || v[i][j-1] ? 0 : dp[i-1][j-1].dSum());
            }
        }
    }
    cout << dp[n][n].dSum();
}