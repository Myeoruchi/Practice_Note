#include <iostream>
using namespace std;

int b;

int NimSum(int B, int X, int Y) {
    if (X == 0 && Y == 0) { return 0; }
    int xr = X % B, yr = Y % B;
    return NimSum(B * b, X - xr, Y - yr) + (xr + yr) % B;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    int x, y;
    while (t--) {
        cin >> b >> x >> y;
        cout << NimSum(b, x, y) << '\n';
    }
}