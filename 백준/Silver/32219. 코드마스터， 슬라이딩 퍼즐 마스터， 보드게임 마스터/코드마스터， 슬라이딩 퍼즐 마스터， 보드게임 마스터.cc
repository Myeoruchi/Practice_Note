#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t, r, c;
    cin >> t;
    while (t--) {
        cin >> r >> c;
        if (r != c) {
            r = min(r, c);
            cout << "jinseo\n" << r << ' ' << r << '\n';
        }
        else { cout << "dohoon\n"; }
    }
}