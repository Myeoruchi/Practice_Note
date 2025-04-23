#include <iostream>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    int n;
    cin >> n;
    if (n == 8) { cout << "4 3"; }
    else { cout << n - n / 2 << ' ' << n / 2 + 1; }
}