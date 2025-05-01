#include <iostream>
#include <vector>
#include <deque>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int n;
    cin >> n;
    vector<int> v(n);
    deque<int> dq;
    for (int &e: v) { cin >> e; }
    for (int i = v.size() - 1; i >= 0; i--) {
        if (v.at(i) == 1) { dq.push_front(n - i); }
        else if (v.at(i) == 3) { dq.push_back(n - i); }
        else {
            dq.push_front(dq.front());
            dq.at(1) = n - i;
        }
    }
    for (int &e: dq) { cout << e << ' '; }
}