#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    string s;
    for (int i = 1; i <= t; i++) {
        cin >> s >> s;
        cout << "Case #" << i << ": ";
        char asc = 0;
        for (int idx = 0; idx < s.length(); idx++) {
            if (idx % 8 == 0 && idx) {
                cout << asc;
                asc = 0;
            }
            asc <<= 1;
            asc += s[idx] == 'I' ? 1 : 0;
        }
        cout << asc << '\n';
    }
}