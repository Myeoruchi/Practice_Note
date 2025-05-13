#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int w, h, n, cnt = 0;
    cin >> w >> h >> n;
    
    int x, y, nx, ny;
    cin >> x >> y;
    while (--n) {
        cin >> nx >> ny;
        cnt += abs(nx - x) + abs(ny - y);
        if ((nx >= x && ny >= y) || (nx <= x && ny <= y)) {
            cnt -= min(abs(nx - x), abs(ny - y));
        }
        x = nx, y = ny;
    }
    cout << cnt;
}