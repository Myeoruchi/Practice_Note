#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

bool team[11];

int main() {
    IO;
    int n, s, r; cin >> n >> s >> r;
    int ans = 0;
    for (int i = 0; i < s; i++) {
        int t; cin >> t;
        team[t] = 1;
        ans++;
    }
    
    vector<int> v;
    for (int i = 0; i < r; i++) {
        int t; cin >> t;
        if (team[t]) { team[t] = 0; ans--; }
        else { v.emplace_back(t); }
    }
    sort(v.begin(), v.end());
    
    for (int i = 0; i < v.size(); i++) {
        if (v[i]-1 && team[v[i]-1]) { team[v[i]-1] = 0; ans--; }
        else if (v[i]+1 <= n && team[v[i]+1]) { team[v[i]+1] = 0; ans--; }
    }
    cout << ans;
}