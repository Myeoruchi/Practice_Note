#include <iostream>
using namespace std;

int main(void) {
    int r, c;
    cin >> r >> c;
    string ans;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            ans += '*';
        }
        ans += '\n';
    }
    cout << ans;
}