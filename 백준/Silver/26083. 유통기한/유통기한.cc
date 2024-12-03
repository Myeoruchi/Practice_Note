#include <iostream>
using namespace std;

int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int year, mon, day, t;
    cin >> year >> mon >> day >> t;
    
    int a, b, c;
    while (t--) {
        cin >> a >> b >> c;
        int cnt = 0, valid = 0;
        
        for (int i = 0; i < 3; i++) {
            if (0 < b && b <= 12 && 0 < c && c <= (days[b] + ((b == 2 && (a % 4 == 0)) ? 1 : 0))) {
                valid++;
                if (year < a || (year == a && (mon < b || (mon == b && day <= c)))) {
                    cnt++;
                }
            }
            
            if (i == 0) { swap(a, c); }
            else if (i == 1) { swap(b, c); }
        }
        
        if (valid) {
            if (valid == cnt) { cout << "safe\n"; }
            else { cout << "unsafe\n"; }
        }
        else { cout << "invalid\n"; }
    }
    
    
    return 0;
}