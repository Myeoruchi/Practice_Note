#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    string s;
    cin.ignore();
    while (n--) {
        getline(cin, s);
        if (s[0] >= 'a') {
            s[0] -= 'a' - 'A';
        }
        cout << s << '\n';
    }
}