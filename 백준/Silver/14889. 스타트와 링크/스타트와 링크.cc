#include <iostream>
#include <vector>
using namespace std;

int s[20][20];
vector<int> teamA, teamB;
int n, res = 0xFFFFFFFF >> 1;

void get_res(int cnt) {
    if (cnt == n) {
        if (teamA.size() == n >> 1) {
            int sum[2] = {0};
            for (int i = 0; i < n >> 1; i++) {
                for (int j = i+1; j < n >> 1; j++) {
                    sum[0] += s[teamA[i]][teamA[j]];
                    sum[1] += s[teamB[i]][teamB[j]];
                }
            }
            res = min(res, abs(sum[0] - sum[1]));
            if (!res) { cout << 0; exit(0); }
        }
        return;
    }
    
    teamA.emplace_back(cnt);
    get_res(cnt+1);
    teamA.pop_back();
    
    teamB.emplace_back(cnt);
    get_res(cnt+1);
    teamB.pop_back();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> s[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            s[i][j] += s[j][i];
        }
    }
    get_res(0);
    cout << res;
}