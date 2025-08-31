#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int r, s; cin >> r >> s;
    cout << (s << 1) - r;
}