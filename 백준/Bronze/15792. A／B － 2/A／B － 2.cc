#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int a, b; cin >> a >> b;
    string s = to_string(a / b);
    a %= b;
    if (a) {
        s += '.';
        a *= 10;
        for (int i = 1; i <= 1000 && a; i++, a *= 10) {
            while (a < b) {
                a *= 10;
                s += '0';
                i++;
            }
            s += to_string(a / b);
            a %= b;
        }
    }
    cout << s;
}