#include <iostream>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    int n, minimum, maximum, add, sub, current, cnt = 0;
    cin >> n >> minimum >> maximum >> add >> sub;
    current = minimum;
    if (maximum - minimum < add) { cout << -1; return 0; }
    while (n > 0) {
        if (current + add <= maximum) { current += add; n--; }
        else if (current - sub >= minimum) { current -= sub; }
        else { current = minimum; }
        cnt++;
    }
    cout << cnt;
}