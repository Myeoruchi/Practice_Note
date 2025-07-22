#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int W0, I0, T, D, I, A;
    cin >> W0 >> I0 >> T >> D >> I >> A;
    
    if (W0 <= (I0 + A - I) * D) { cout << "Danger Diet\n"; }
    else { cout << W0 - (I0 + A - I) * D << ' ' << I0 << '\n'; }
    
    int DI = I0;
    while (D--) {
        int diff = I - (DI + A);
        W0 += diff;
        if (abs(diff) > T) {
            DI += diff > 0 ? diff / 2 : (diff - 1) / 2;
        }
    }
    
    if (W0 > 0 && DI > 0) { cout << W0 << ' ' << DI << ' ' << (I0 - DI > 0 ? "YOYO" : "NO") << '\n'; }
    else { cout << "Danger Diet"; }
}