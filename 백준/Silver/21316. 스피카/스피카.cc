#include <iostream>
#include <vector>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    vector<int> v[13];
    int a, b;
    for (int i = 0; i < 12; i++) {
        cin >> a >> b;
        v[a].emplace_back(b);
        v[b].emplace_back(a);
    }
    for (int i = 1; i <= 12; i++) {
        if (v[i].size() == 3) {
            int sum = 0;
            for (auto elem: v[i]) {
                sum += v[elem].size();
            }
            if (sum == 6) { cout << i; break; }
        }
    }
}