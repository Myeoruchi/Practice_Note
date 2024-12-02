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
            if (x < y) { x += a; }
            else if (x > y) { y += b; }
            else { cout << x; cnt = 0; break; }
        }
        if (cnt) { cout << -1; }
    }
    return 0;
}