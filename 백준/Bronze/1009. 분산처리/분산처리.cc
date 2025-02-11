#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    int a, b;
    while (t--) {
        cin >> a >> b;
        if (a == 1) {
            cout << "1\n";
            continue;
        }
        int num = 1, prev = a;
        while (b) {
            if (b & 1) {
                num *= prev;
                num %= 10;
            }
            if (num == 0) {
                num = 10;
                break;
            }
            prev = ((prev % 10) * (prev % 10)) % 10;
            b >>= 1;
        }
        cout << num << '\n';
    }

    return 0;
}