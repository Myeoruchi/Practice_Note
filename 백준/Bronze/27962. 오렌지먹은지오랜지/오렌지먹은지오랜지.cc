#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    
    for (int i = 0; i < n-1; i++) {
        int wrong = 0;
        for (int j = 0; j <= i; j++) {
            if (s[j] != s[n-1-i+j]) {
                wrong++;
                if (wrong == 2) {
                    break;
                }
            }
        }
        if (wrong == 1) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}