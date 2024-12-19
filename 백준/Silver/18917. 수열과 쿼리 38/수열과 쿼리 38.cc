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
        switch (a) {
            case 1:
                cin >> b;
                sum += b;
                res ^= b;
                break;
            case 2:
                cin >> b;
                sum -= b;
                res ^= b;
                break;
            case 3:
                cout << sum << '\n';
                break;
            case 4:
                cout << res << '\n';
                break;
        }
    }
}