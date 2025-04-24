#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    unordered_map<string, int> um;
    vector<pair<int, string>> v;
    int limit, n;
    string s;
    cin >> limit >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        um[s] = i;
    }
    for (auto &e: um) { v.emplace_back(e.second, e.first); }
    sort(v.begin(), v.end());
    for (int i = 0; i < limit && i < v.size(); i++) {
        cout << v[i].second << '\n';
    }
}