#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

bool comp(pair<int, string> &a, pair<int, string> &b) {
    return a.second < b.second;
}

int main() {
    IO;
    vector<pair<int, string>> ans;
    int n; cin >> n;
    while (n--) {
        string name, a, b;
        int c, rank;
        cin >> name >> a >> b >> c >> rank;
        if (a == "hewhak" || b == "winner" || (1 <= c && c <= 3)) { continue; }
        ans.emplace_back(rank, name);
    }
    sort(ans.begin(), ans.end());
    
    if (ans.size() <= 10) { sort(ans.begin(), ans.end(), comp); }
    else { sort(ans.begin(), ans.begin() + 10, comp); }
    int size = (ans.size() <= 10 ? ans.size() : 10);
    cout << size << '\n';
    for (int i = 0; i < size; i++) {
        cout << ans[i].second << '\n';
    }
}