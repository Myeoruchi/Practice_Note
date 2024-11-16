#include <iostream>
using namespace std;

int main() {
    int n, ans = 0;
    string str;
    cin >> n >> str;
    
    for (int i = 0; i < n/2; i++) {
        if (str[i] == '?' && str[n-1-i] == '?') { ans += 26; }
        else if (str[i] == '?' || str[n-1-i] == '?') { ans++; }
        else if (str[i] != str[n-1-i]) {
            cout << 0;
            return 0;
        }
        
    }
    
    cout << ans;
    return 0;
}