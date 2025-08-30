#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int h, m, s, d;
    cin >> h >> m >> s >> d;
    s += d;
    m += s / 60;
    h += m / 60;
    cout << h % 24 << ' ' << m % 60 << ' ' << s % 60;
}