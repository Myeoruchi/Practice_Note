#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string str;
    int n;
    cin >> str >> n;
    vector<string> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    for (int t = 0; t < 26; t++) {
        for (int idx = 0; idx < str.length(); idx++) {
            str[idx] = (str[idx]+1 - 'a') % 26 + 'a';
        }
        for (int i = 0; i < n; i++) {
            if (str.find(v[i]) != string::npos) { cout << str; return 0; }
        }
    }
}