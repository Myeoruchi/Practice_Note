#include <iostream>
#include <algorithm>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n; cin >> n;
    int sum = 0;
    while (n--) {
        int a, b, c; cin >> a >> b >> c;
        int cal;
        if (a == b && b == c) { cal = 10000 + a * 1000; }
        else if (a == b || b == c || a == c) {
            cal = 1000;
            if (a == b || b == c) { cal += 100 * b; }
            else { cal += 100 * a; }
        }
        else { cal = 100 * max({a, b, c}); }
        sum = max(sum, cal);
    }
    cout << sum;
}