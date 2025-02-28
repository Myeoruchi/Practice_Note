#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, x, y, e;
    cin >> n >> x >> y >> e;
    vector<pair<int, pair<int, int>>> v(n);
    int tx, ty, te;
    for (int i = 0; i < n; i++) {
        cin >> tx >> ty >> te;
        v[i] = {te, {tx, ty}};
    }
    
    int wifi = 0;
    for (auto room1: v) {
        tx = room1.second.first;
        ty = room1.second.second;
        te = e - (abs(x - tx) + abs(y - ty));
        for (auto room2: v) {
            if (te <= 0) { break; }
            te -= max(0, room2.first - (abs(room2.second.first - tx) + abs(room2.second.second - ty)));
        }
        wifi = max(wifi, te);
    }
    
    if (wifi) { cout << wifi; }
    else { cout << "IMPOSSIBLE"; }
}