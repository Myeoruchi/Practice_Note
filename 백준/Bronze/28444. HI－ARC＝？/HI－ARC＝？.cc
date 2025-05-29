#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int h, i, a, r, c;
    cin >> h >> i >> a >> r >> c;
    cout << h * i - a * r * c;
}