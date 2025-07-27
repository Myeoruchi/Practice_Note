#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int a, b; cin >> a >> b;
    cout << b * 10000 + a * 1000;
}