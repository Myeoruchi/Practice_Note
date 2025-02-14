#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m, idx;
    cin >> n;
    vector<string> str(n);
    for (int i = 0; i < n; i++) {
        cin >> str[i];
        if (str[i] == "?") { idx = i; }
    }

    cin >> m;
    string temp;
    for (int i = 0; i < m; i++) {
        cin >> temp;
        if (find(str.begin(), str.end(), temp) == str.end()) {
            if (idx > 0 && str[idx-1].back() != temp.front()) { continue; }
            if (idx+1 < n && str[idx+1].front() != temp.back()) { continue; }
            cout << temp;
            break;
        }
    }
}