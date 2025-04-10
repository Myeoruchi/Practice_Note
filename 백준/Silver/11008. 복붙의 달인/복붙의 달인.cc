#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    string a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        int time = a.length();
        string::size_type idx = 0;
        while (1) {
            idx = a.find(b, idx);
            if (idx == string::npos) { break; }
            time -= b.length() - 1;
            idx += b.length();
        }
        cout << time << '\n';
    }
}