#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int a, b;
    while (cin >> a >> b && a) { cout << a + b << '\n'; }
}