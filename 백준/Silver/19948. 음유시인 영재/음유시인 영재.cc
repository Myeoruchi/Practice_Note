#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string s, title;
    int alpha[26], space;
    getline(cin, s);
    cin >> space;
    for (int i = 0; i < 26; i++) {
        cin >> alpha[i];
    }
    
    title += toupper(s[0]);
    alpha[toupper(s[0]) - 'A']--;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == ' ' && s[i+1] != ' ') { title += toupper(s[i+1]); }
        if (s[i-1] != s[i]) {
            if (s[i] == ' ') { space--; }
            else { alpha[toupper(s[i]) - 'A']--; }
        }
    }
    for (int i = 0; i < title.length(); i++) {
        alpha[title[i] - 'A']--;
    }
    
    for (int i = 0; i < 26; i++) {
        if (alpha[i] < 0) {
            space = -1;
            break;
        }
    }
    if (space < 0) { cout << -1; }
    else { cout << title; }
}