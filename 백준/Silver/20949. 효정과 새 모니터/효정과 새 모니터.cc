#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b) {
    if (a.first == b.first) { return a.second < b.second; }
    return a.first > b.first;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, a, b;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++) {
        cin >> a >> b;
        v.emplace_back(make_pair(a*a + b*b, i));
    }
    sort(v.begin(), v.end(), compare);
    
    for (auto elem: v) {
        cout << elem.second << '\n';
    }
}