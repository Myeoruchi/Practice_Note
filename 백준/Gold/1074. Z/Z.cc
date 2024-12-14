#include <iostream>
using namespace std;

int main() {
    int n, r, c;
    cin >> n >> r >> c;
    
    int res = 0, nr = 1 << n-1, nc = 1 << n-1;
    int diff = (1 << n) * (1 << n);
    while (n--) {
        diff >>= 2;
        if (r < nr) {
            nr -= 1 << n-1;
            if (c < nc) { nc -= 1 << n-1; }
            else {
                res += diff;
                nc += 1 << n-1;
            }
        }
        else {
            nr += 1 << n-1;
            if (c < nc) {
                nc -= 1 << n-1;
                res += diff * 2;
            }
            else {
                nc += 1 << n-1;
                res += diff * 3;
            }
        }
    }
    cout << res;
    return 0;
}