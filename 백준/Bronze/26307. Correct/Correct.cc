#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int h, m; cin >> h >> m;
    cout << (h - 9) * 60 + m;
}