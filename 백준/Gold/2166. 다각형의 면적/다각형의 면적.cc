#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    double n, x1, y1, x2, y2, x, y;
    double sum = 0;
    cin >> n >> x1 >> y1;
    x = x1, y = y1;
    while (--n) {
        cin >> x2 >> y2;
        sum += (x2 - x1) * (y2 + y1);
        x1 = x2, y1 = y2;
    }
    sum += (x - x1) * (y + y1);
    sum /= 2;
    cout.precision(1);
    cout << fixed << abs(sum);
}