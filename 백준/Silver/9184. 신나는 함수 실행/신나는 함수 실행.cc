#include <iostream>
using namespace std;

int res[21][21][21];

int w(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) { return 1; }
    if (a > 20 || b > 20 || c > 20) { return w(20, 20, 20); }
    if (res[a][b][c]) { return res[a][b][c]; }
    if (a < b && b < c) { return res[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c); }
    return res[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int a, b, c;
    while (true) {
        cin >> a >> b >> c;
        if (a == b && b == c && c == -1) { break; }
        cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << '\n';
    }
    return 0;
}