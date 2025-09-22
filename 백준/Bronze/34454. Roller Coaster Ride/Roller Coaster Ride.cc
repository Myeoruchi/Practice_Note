#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n, c, p; cin >> n >> c >> p;
    cout << (n <= c * p ? "yes" : "no");
}