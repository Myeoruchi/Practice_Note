#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int x = a * 3 + b * 20 + c * 120;
    int y = d * 3 + e * 20 + f * 120;
    cout << (x > y ? "Max" : (x == y ? "Draw" : "Mel"));
}