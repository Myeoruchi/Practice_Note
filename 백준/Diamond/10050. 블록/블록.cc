#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

void solve(int n, int depth) {
    int diff = depth * 4;
    if (n > 7) {
        cout << 2 * (n - 1) + diff << " to " << -1 + diff << '\n';
        cout << 3 + diff << " to " << 2 * (n - 1) + diff << '\n';
        solve(n - 4, depth + 1);
    }
    else if (n == 7) {
        cout << 8 + diff << " to " << -1 + diff << '\n';
        cout << 5 + diff << " to " << 8 + diff << '\n';
        cout << 12 + diff << " to " << 5 + diff << '\n';
        cout << 3 + diff << " to " << 12 + diff << '\n';
        cout << 9 + diff << " to " << 3 + diff << '\n';
        cout << 0 + diff << " to " << 9 + diff << '\n';
        cout << 13 + diff << " to " << 0 + diff << '\n';
        for (int i = 0; i < depth; i++) {
            cout << 0 + diff - 4 * (i + 1) << " to " << 13 + diff + 4 * i << '\n';
            cout << 13 + diff + 4 * (i + 1) << " to " << 0 + diff - 4 * (i + 1) << '\n';
        }
    }
    else if (n == 6) {
        cout << 10 + diff << " to " << -1 + diff << '\n';
        cout << 7 + diff << " to " << 10 + diff << '\n';
        cout << 2 + diff << " to " << 7 + diff << '\n';
        cout << 6 + diff << " to " << 2 + diff << '\n';
        cout << 0 + diff << " to " << 6 + diff << '\n';
        cout << 11 + diff << " to " << 0 + diff << '\n';
        for (int i = 0; i < depth; i++) {
            cout << 0 + diff - 4 * (i + 1) << " to " << 11 + diff + 4 * i << '\n';
            cout << 11 + diff + 4 * (i + 1) << " to " << 0 + diff - 4 * (i + 1) << '\n';
        }
    }
    else if (n == 5) {
        cout << 8 + diff << " to " << -1 + diff << '\n';
        cout << 3 + diff << " to " << 8 + diff << '\n';
        cout << 6 + diff << " to " << 3 + diff << '\n';
        cout << 0 + diff << " to " << 6 + diff << '\n';
        cout << 9 + diff << " to " << 0 + diff << '\n';
        for (int i = 0; i < depth; i++) {
            cout << 0 + diff - 4 * (i + 1) << " to " << 9 + diff + 4 * i << '\n';
            cout << 9 + diff + 4 * (i + 1) << " to " << 0 + diff - 4 * (i + 1) << '\n';
        }
    }
    else if (n == 4) {
        cout << 6 + diff << " to " << -1 + diff << '\n';
        cout << 3 + diff << " to " << 6 + diff << '\n';
        cout << 0 + diff << " to " << 3 + diff << '\n';
        cout << 7 + diff << " to " << 0 + diff << '\n';
        for (int i = 0; i < depth; i++) {
            cout << 0 + diff - 4 * (i + 1) << " to " << 7 + diff + 4 * i << '\n';
            cout << 7 + diff + 4 * (i + 1) << " to " << 0 + diff - 4 * (i + 1) << '\n';
        }
    }
    else {
        cout << 2 + diff << " to " << -1 + diff << '\n';
        cout << 5 + diff << " to " << 2 + diff << '\n';
        cout << 3 + diff << " to " << -3 + diff << '\n';
    }
}

int main() {
    int n;
    cin >> n;
    solve(n, 0);
}