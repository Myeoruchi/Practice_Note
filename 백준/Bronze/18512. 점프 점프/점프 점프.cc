#include <iostream>
using namespace std;

int main() {
    int a, b, x, y, cnt = 0;
    cin >> a >> b >> x >> y;
    
    if (a == b) {
        if ((max(x, y) - min(x, y)) % a == 0) { cout << max(x, y); }
        else { cout << -1; }
    }
    else {
        while (cnt++ < 200) {
            if (x < y) { x += (y - x) / a ? ((y - x) / a) * a : a; }
            else if (x > y) { y += (x - y) / b ? ((x - y) / b) * b : b; }
            else { cout << x; break; }
        }
        if (cnt > 200) { cout << -1; }
    }
    return 0;
}