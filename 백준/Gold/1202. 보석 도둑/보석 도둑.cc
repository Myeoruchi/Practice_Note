#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
using ll = long long;

#define IO cin.tie(0)->sync_with_stdio(0)

bool cmp(pair<int, int> &a, pair<int, int> &b) {
    if (a.first != b.first) { return a.first < b.first; }
    return a.second > b.second;
}

int main() {
    IO;
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> gem(n);
    vector<int> bag(k);
    vector<bool> used(k);
    for (auto &e: gem) { cin >> e.first >> e.second; }
    for (int &e: bag) { cin >> e; }
    sort(gem.begin(), gem.end(), cmp);
    sort(bag.begin(), bag.end());
    
    priority_queue<int> pq;
    ll sum = 0;
    int idx = 0;
    for (int &e: bag) {
        while (idx < n && gem[idx].first <= e) {
            pq.push(gem[idx].second);
            idx++;
        }
        if (!pq.empty()) { sum += pq.top(); pq.pop(); }
    }
    cout << sum;
}