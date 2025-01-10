#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    string ans;
    int sum = 0, maximum = 0;
    while (t--) {
        string pokemon;
        int have, need;
        cin >> pokemon >> need >> have;
        
        int evol = 0;
        while (have / need) {
            int cnt = have / need;
            evol += cnt;
            have -= cnt * (need - 2);
        }
        if (maximum < evol) {
            maximum = evol;
            ans = pokemon;
        }
        sum += evol;
    }
    
    cout << sum << '\n' << ans;
}