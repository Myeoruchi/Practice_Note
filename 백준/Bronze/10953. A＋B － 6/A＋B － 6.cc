#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string s;
    while (n--) {
        cin >> s;
        cout << s[0] + s[2] - '0' * 2 << '\n';
    }
}