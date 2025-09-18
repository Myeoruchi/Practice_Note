#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
using p = pair<string, int>;

#define IO cin.tie(0)->sync_with_stdio(0)

bool cmp(const p& a, const p& b) {
    if (b.second == a.second) { return a.first < b.first; }
    return a.second > b.second;
}

int main() {
    IO;
    map<string, int> book;
    int n; cin >> n;
    while (n--) {
        string s; cin >> s;
        book[s]++;
    }
    
    vector<pair<string, int>> v(book.begin(), book.end());
    sort(v.begin(), v.end(), cmp);
    cout << v[0].first;
}