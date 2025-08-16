#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

void shutdown() { cout << "NO"; exit(0); }

int main() {
    IO;
    int n, m; cin >> n >> m;
    vector<string> v(n);
    unordered_map<char, int> um;
    unordered_map<string, bool> dupl;
    for (int t = 0; t < m; t++) {
        string s; cin >> s;
        if (dupl[s]) { shutdown(); }
        dupl[s] = true;
        for (int i = 0; i < n; i++) {
            if (um.find(s[i] - 'A') == um.end()) { um[s[i] - 'A'] = i; }
            else if (um[s[i] - 'A'] != i) { shutdown(); }
        }
    }
    for (int i = 0; i < 26; i++) {
        if (um.find(i) != um.end()) {
            v[um[i]] += char(i + 'A');
        }
    }
    int sum = 1;
    for (string &s: v) { sum *= s.length(); }
    if (sum != m) { shutdown(); }
    cout << "YES\n";
    for (string &s: v) { cout << s << '\n'; }
}