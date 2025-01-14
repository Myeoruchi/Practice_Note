#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int s1, s2, a1, a2, cnt = 0;
    cin >> s1 >> s2;
    
    while (cin >> a1, cin >> a2) {
        if (a1 != a2) {
            if (cnt < s1) { cout << "Wrong Answer"; return 0; }
            else { cout << "Why Wrong!!!"; return 0; }
        }
        cnt++;
    }
    cout << "Accepted";
    return 0;
}