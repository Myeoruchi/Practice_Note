#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    double n; cin >> n;
    cout.precision(2);
    cout << fixed << n / 4;
}