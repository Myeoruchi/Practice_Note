#include <iostream>
#include <vector>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int n, p;
    cin >> n >> p;
    vector<vector<int>> v(7);
    
    int cnt = 0, line, fret;
    while (n--) {
        cin >> line >> fret;
        if (v[line].empty()) { v[line].emplace_back(fret); }
        else {
            while (!v[line].empty() && v[line].back() > fret) {
                v[line].pop_back();
                cnt++;
            }
            if (v[line].empty() || v[line].back() != fret) {
                v[line].emplace_back(fret);
            }
            else { cnt--; }
        }
        cnt++;
    }
    cout << cnt;
}