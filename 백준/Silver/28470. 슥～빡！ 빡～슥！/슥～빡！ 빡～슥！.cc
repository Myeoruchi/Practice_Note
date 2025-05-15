#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int n; cin >> n;
    vector<int> up(n), down(n);
    for (int &e: up) { cin >> e; }
    for (int &e: down) { cin >> e; }
    
    double k;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> k;
        int tmp = k * 10;
        if (tmp > 10) { sum += tmp * up[i] / 10 - down[i]; }
        else { sum += up[i] - tmp * down[i] / 10; }
    }
    cout << sum;
}