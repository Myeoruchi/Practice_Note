#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t, n, temp;
    string ans, stemp;
    cin >> t;
    
    while (t--) {
        cin >> n;
        int num = 0;
        while (n--) {
            cin >> stemp >> temp;
            if (num < temp) {
                ans = stemp;
                num = temp;
            }
        }
        cout << ans << '\n';
    }
}