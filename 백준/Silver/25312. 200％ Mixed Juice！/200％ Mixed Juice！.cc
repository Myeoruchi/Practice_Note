#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;

#define IO ios::sync_with_stdio(0), cin.tie(0)

bool comp(pair<int, int> &a, pair<int, int> &b) {
    return ll(a.second) * b.first > ll(b.second) * a.first;
}

int main() {
    IO;
    int n;
    ll m;
    cin >> n >> m;
    vector<pair<int, int>> v(n);
    for (auto &e: v) { cin >> e.first >> e.second; }
    sort(v.begin(), v.end(), comp);
    
    int idx = 0;
    ll mom, son, sum = 0;
    while (m > 0) {
        if (m - v[idx].first >= 0) {
            m -= v[idx].first;
            sum += v[idx++].second;
        }
        else {
            mom = v[idx].first;
            son = m * v[idx].second + sum * mom;
            int divisor = __gcd(mom, son);
            son /= divisor, mom /= divisor;
            break;
        }
    }
    
    if (m) { cout << son << '/' << mom; }
    else { cout << sum << '/' << 1; }
}