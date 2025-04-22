#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

struct road {
    int start, end, dist;
};

bool comp(const road &a, const road &b) {
    if (a.end != b.end) { return a.end < b.end; }
    if (a.start != b.start) { return a.start < b.start; }
    return a.dist < b.dist;
}

int ans[10001];

int main() {
    FAST_IO;
    vector<road> roads;
    int n, d, start, end, dist, idx = 0;
    cin >> n >> d;
    while (n--) {
        cin >> start >> end >> dist;
        if (dist >= end - start || end > d) { continue; }
        road tmp = { start, end, dist };
        roads.emplace_back(tmp);
    }
    sort(roads.begin(), roads.end(), comp);
    for (int i = 1; i <= d; i++) {
        ans[i] = i;
        while (idx < roads.size() && roads[idx].end == i) {
            ans[i] = min(ans[i], ans[roads[idx].start] + roads[idx].dist);
            idx++;
        }
        ans[i] = min(ans[i], ans[i-1] + 1);
    }
    cout << ans[d];
}