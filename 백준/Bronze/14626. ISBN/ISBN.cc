#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int bias = 1, sum = 0, pos;
    for (int i = 0; i < 13; i++) {
        if (s[i] != '*') { sum += (s[i] - '0') * bias; }
        else { pos = i; }
        bias = (bias + 2) % 4;
    }
    int ans = (10 - sum % 10) % 10;
    if (pos % 2) {
        ans += ans % 3 ? ((ans + 10) % 3 ? 20 : 10) : 0;
        ans /= 3;
    }
    cout << ans;
}