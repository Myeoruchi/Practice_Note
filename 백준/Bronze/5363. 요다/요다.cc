#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    string str;
    while (n--) {
        string last;
        for (int i = 0; i < 2; i++) {
            cin >> str;
            last += str + ' ';
        }
        cin.ignore();
        getline(cin, str);
        cout << str << ' ' << last << '\n';
    }
    return 0;
}