#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    cin.get();
    
    string str;
    while (n--) {
        getline(cin, str);
        int len = str.length();
        for (int i = 0; i < len >> 1; i++) {
            if (toupper(str[i]) != toupper(str[len-1-i])) {
                len = 0;
                break;
            }
        }
        if (len) { cout << "Yes\n"; }
        else { cout << "No\n"; }
    }
}