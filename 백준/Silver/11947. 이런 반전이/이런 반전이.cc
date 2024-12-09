#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    long long res;
    string num;
    while (t--) {
        cin >> num;
        
        if (num[0] >= '5') {
            num[0] = '5';
            for (int i = 1; i < num.length(); i++) {
                num[i] = '0';
            }
            res = stoll(num);
        }
        else { res = stoll(num); }
        
        for (int i = 0; i < num.length(); i++) {
            num[i] = '9' - num[i] + '0';
        }
        res *= stoll(num);
        
        cout << res << '\n';
    }
    
    return 0;
}