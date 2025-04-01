#include <iostream>
#include <cmath>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    long long n, q;
    cin >> n;
    q = sqrt(n);
    if (q * q < n) { q++; }
    cout << q;
}