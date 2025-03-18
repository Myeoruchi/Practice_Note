#include <iostream>
using namespace std;

int main() {
    int n, idx = 2;
    string tmp, s;
    cin >> n >> tmp;
    if (n <= 2) { s = tmp; }
    else {
        s += tmp[0];
        s += tmp[1];
        for (int i = 2; i < n; i++) {
            if (!((tmp[i] == '4' || tmp[i] == '5') && s[idx-1] == 'S' && s[idx-2] == 'P')) {
                s += tmp[i];
                idx++;
            }
        }
    }
    cout << s;
}