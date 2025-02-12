#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int minDist = 100, maxDist = 1, n, temp;
        cin >> n;
        while (n--) {
            cin >> temp;
            minDist = min(minDist, temp);
            maxDist = max(maxDist, temp);
        }
        cout << ((maxDist - minDist) << 1) << '\n';
    }
}