#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    string s;
    while (n--) {
        cin >> s;
        if (6 <= s.length() && s.length() <= 9) { cout << "yes\n"; }
        else { cout << "no\n"; }
    }
}