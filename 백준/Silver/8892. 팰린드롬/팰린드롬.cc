#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(string str) {
    int len = str.length();
    for (int idx = 0; idx < len >> 1; idx++) {
        if (str[idx] != str[len - idx - 1]) {
            return false;
        }
    }
    return true;
}

void pal(const vector<string> &str, int m) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j) { continue; }
            string temp = str[i] + str[j];
            if (isPalindrome(temp)) {
                cout << temp << '\n';
                return;
            }
        }
    }
    cout << "0\n";
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    while (n--) {
        int m;
        cin >> m;
        
        vector<string> str(m);
        for (int i = 0; i < m; i++) {
            cin >> str[i];
        }
        
        pal(str, m);
    }
    return 0;
}