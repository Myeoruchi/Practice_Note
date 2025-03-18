#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m, q, tmp;
    cin >> n >> m;
    
    int arr[n];
    vector<pair<vector<int>, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        vector<int> tv(tmp);
        for (int j = 0; j < tmp; j++) {
            cin >> tv[j];
        }
        v[arr[i]-1] = {tv, i+1};
    }
    
    cin >> q;
    while (q--) {
        cin >> tmp;
        int flag = false;
        for (int i = 0; i < n; i++) {
            if (find(v[i].first.begin(), v[i].first.end(), tmp) != v[i].first.end()) {
                cout << v[i].second << ' ';
                flag = true;
            }
        }
        if (!flag) { cout << -1; }
        cout << '\n';
    }
}