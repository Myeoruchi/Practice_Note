#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    unordered_map<string, vector<string>> um;
    vector<string> ans;
    int n, cnt = 0;
    string s1, s2;
    cin >> n;
    while (n--) {
        cin >> s1 >> s2;
        if (s2 != "-") { um[s2].emplace_back(s1); }
    }
    for (auto &e: um) {
        if (e.second.size() == 2) {
            ans.emplace_back(e.first);
            cnt++;
        }
    }
    cout << cnt << '\n';
    for (auto &e: ans) { cout << um[e][0] << ' ' << um[e][1] << '\n'; }
}