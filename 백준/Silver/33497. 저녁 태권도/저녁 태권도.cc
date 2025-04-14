#include <iostream>
#include <vector>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    int n, m, idx = 0;
    cin >> n >> m;
    vector<pair<int, int>> day(m);
    vector<string> stud(n);
    for (auto &e: day) { cin >> e.first >> e.second; }
    
    for (int i = 0; i < m; i++) {
        int out = n - (day[i].first + day[i].second);
        if (day[i].first + day[i].second > n) { idx = -1; break; }
        while (idx < n && out > 0) {
            stud[idx] += 'X';
            idx++; out--;
        }
        
        int cnt = 0;
        for (auto &s: stud) {
            if (s.length() == i) {
                s += cnt++ < day[i].first ? '+' : '-';
            }
        }
    }
    
    if (idx == n) {
        cout << "YES\n";
        for (const auto &ans: stud) {
            cout << ans << '\n';
        }
    }
    else { cout << "NO"; }
}