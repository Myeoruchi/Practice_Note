#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    int n, m;
    while (t--) {
        cin >> n >> m;
        if (n < 12 || m < 4) { cout << -1 << '\n'; }
        else { cout << 11*m + 4 << '\n'; }
    }
}