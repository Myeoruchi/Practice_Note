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
            asc <<= 1;
            asc += s[idx] == 'I' ? 1 : 0;
            if ((idx+1) % 8 == 0) {
                cout << asc;
                asc = 0;
            }
        }
        cout << '\n';
    }
}