#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    cin.ignore();
    
    string s;
    while (n--) {
        getline(cin, s);
        int score = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') { continue; }
            score += s[i] - 'A' + 1;
        }
        if (score == 100) {
            cout << "PERFECT LIFE\n";
            continue;
        }
        cout << score << '\n';
    }

    return 0;
}