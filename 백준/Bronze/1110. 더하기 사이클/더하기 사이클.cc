#include <iostream>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    int n1, n2, cnt = 0;
    cin >> n1;
    n2 = n1;
    do {
        cnt++;
        n2 = n2 % 10 * 10 + (n2 / 10 + n2 % 10) % 10;
    } while (n1 != n2);
    cout << cnt;
}