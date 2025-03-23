#include <iostream>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false), cin.tie(0);

int main() {
    int n, l;
    cin >> n >> l;
    n <<= 1;
    
    int first, last, size = l-1;
    while (size++ <= 100) {
        if (n % size != 0) { continue; }
        if (n / size % 2 == size % 2) { continue; }
        first = n / size / 2 - size / 2 + (size % 2 == 0);
        if (first < 0) { continue; }
        last = n / size / 2 + size / 2;
        if ((first + last) * size == n) { break; }
    }
    if (size <= 100) {
        for (int i = first; i <= last; i++) {
            cout << i << ' ';
        }
    }
    else { cout << -1; }
}