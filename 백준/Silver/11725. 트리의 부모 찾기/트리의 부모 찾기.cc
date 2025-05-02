#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int n, a, b;
    cin >> n;
    vector<vector<int>> v(n+1);
    vector<int> parent(n+1);
    vector<bool> visit(n+1);
    queue<int> q;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        v.at(a).emplace_back(b);
        v.at(b).emplace_back(a);
    }
    
    visit.at(1) = true;
    q.push(1);
    while (!q.empty()) {
        int next = q.front();
        q.pop();
        visit.at(next) = true;
        for (int &e: v.at(next)) {
            if (!visit.at(e)) {
                parent.at(e) = next;
                q.push(e);
            }
        }
    }
    for (int i = 2; i <= n; i++) { cout << parent.at(i) << '\n'; }
}