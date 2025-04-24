#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    unordered_map<string, int> um;
    int limit, n;
    string s;
    cin >> limit >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        um[s] = i;
    }
    vector<pair<string, int>> v(um.begin(), um.end());
    sort(v.begin(), v.end(), [](auto &a, auto &b) {
        return a.second < b.second; });
    for (int i = 0; i < limit && i < v.size(); i++) {
        cout << v[i].first << '\n';
    }
}