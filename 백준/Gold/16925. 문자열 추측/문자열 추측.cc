#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

bool comp(pair<string, int> &a, pair<string, int> &b) { return a.first.length() < b.first.length(); }

int main() {
    IO;
    int n; cin >> n;
    int size = 2 * (n - 1);
    vector<pair<string, int>> v(size);
    for (int i = 0; i < size; i++) {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end(), comp);
    
    string ans;
    vector<char> c(size);
    for (int j = 0; j < 2; j++) {
        ans = v[v.size() - j - 1].first + v[v.size() - !j - 1].first.back();
        bool flg = 1;
        for (int i = 0; i < size; i += 2) {
            if (ans.substr(0, v[i].first.length()) == v[i].first &&
                ans.substr(n - v[i].first.length()) == v[i+1].first) {
                c[v[i].second] = 'P';
                c[v[i+1].second] = 'S';
            }
            else if (ans.substr(0, v[i].first.length()) == v[i+1].first &&
                    ans.substr(n - v[i].first.length()) == v[i].first) {
                c[v[i].second] = 'S';
                c[v[i+1].second] = 'P';
            }
            else { flg = 0; break; }
        }
        if (flg) { break; }
    }
    
    cout << ans << '\n';
    for (int i = 0; i < size; i++) {
        cout << c[i];
    }
}