#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    double a, b; cin >> a >> b;
    double c = 299792458.0;
    cout.precision(9);
    cout << fixed << (a + b) / (1 + a * b / c / c);
}