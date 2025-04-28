#include <iostream>
#include <vector>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

vector<vector<pair<int, int>>> v(8);

void solve(int n, int depth) {
    int diff = depth * 4;
    if (n > 7) {
        cout << 2 * (n - 1) + diff << " to " << -1 + diff << '\n';
        cout << 3 + diff << " to " << 2 * (n - 1) + diff << '\n';
        solve(n - 4, depth + 1);
    }
    else {
        for (auto &e: v[n]) {
            cout << e.first + diff << " to " << e.second + diff << '\n';
        }
        for (int i = 0; i < depth; i++) {
            cout << diff - 4 * (i + 1) << " to " << v[n].back().first + diff + 4 * i << '\n';
            cout << v[n].back().first + diff + 4 * (i + 1) << " to " << diff - 4 * (i + 1) << '\n';
        }
    }
}

int main() {
    v[3] = {{2, -1}, {5, 2}, {3, -3}};
    v[4] = {{6, -1}, {3, 6}, {0, 3}, {7, 0}};
    v[5] = {{8, -1}, {3, 8}, {6, 3}, {0, 6}, {9, 0}};
    v[6] = {{10, -1}, {7, 10}, {2, 7}, {6, 2}, {0, 6}, {11, 0}};
    v[7] = {{8, -1}, {5, 8}, {12, 5}, {3, 12}, {9, 3}, {0, 9}, {13, 0}};
    
    int n;
    cin >> n;
    solve(n, 0);
}