#include <iostream>
#include <queue>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    priority_queue<int> pq;
    int n, t; cin >> n;
    while (n--) {
        cin >> t;
        if (t) { pq.push(t); }
        else if (!pq.empty()) { cout << pq.top() << '\n'; pq.pop(); }
        else { cout << "0\n"; }
    }
}