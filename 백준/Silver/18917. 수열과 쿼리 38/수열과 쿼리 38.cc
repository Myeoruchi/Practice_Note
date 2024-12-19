#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    long long sum = 0;
    int res = 0;
    int a, b;
    while (n--) {
        cin >> a;
        if (a < 3) {
            cin >> b;
            sum += a == 1 ? b : -b;
            res ^= b;
        }
        else if (a == 3) { cout << sum << '\n'; }
        else { cout << res << '\n'; }
    }
}