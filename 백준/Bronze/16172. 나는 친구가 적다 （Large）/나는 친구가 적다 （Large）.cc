#include <iostream>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    string a, b, s;
    cin >> a >> b;
    for (const auto& c: a) {
        if (c <= '9') { continue; }
        s += c;
    }
    if (s.find(b) != string::npos) { cout << 1; }
    else { cout << 0; }
}