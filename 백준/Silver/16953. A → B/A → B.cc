#include <iostream>
#include <queue>
using namespace std;
using ll = long long;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    queue<pair<ll, int>> q;
    int a, b;
    cin >> a >> b;
    
    q.push({a, 1});
    while (!q.empty()) {
        auto next = q.front();
        q.pop();
        if (next.first > b) { continue; }
        ll n1 = next.first << 1;
        ll n2 = next.first * 10 + 1;
        q.push({n1, next.second + 1});
        if (n1 == b) { break; }
        q.push({n2, next.second + 1});
        if (n2 == b) { break; }
    }
    if (q.empty()) { cout << -1; }
    else { cout << q.back().second; }
}