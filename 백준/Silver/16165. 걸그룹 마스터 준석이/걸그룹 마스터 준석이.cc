#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    unordered_map<string, vector<string>> team;
    unordered_map<string, string> member;
    
    int n, m; cin >> n >> m;
    while (n--) {
        string tn; cin >> tn;
        int cnt; cin >> cnt;
        while (cnt--) {
            string mn; cin >> mn;
            team[tn].emplace_back(mn);
            member[mn] = tn;
        }
        sort(team[tn].begin(), team[tn].end());
    }
    
    while (m--) {
        string quiz; cin >> quiz;
        int type; cin >> type;
        if (type) { cout << member[quiz] << '\n'; }
        else {
            for (string &s: team[quiz]) {
                cout << s << '\n';
            }
        }
    }
}