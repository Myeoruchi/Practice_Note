#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    long long num;
    long long res;
    while (t--) {
        cin >> num;
        
        res = 1;
        while (res <= num) { res *= 10; }
        
        if (res >> 1 <= num) { res = (res >> 1) * ((res >> 1) - 1); }
        else { res = num * (res - num - 1); }
        
        cout << res << '\n';
    }
    
    return 0;
}