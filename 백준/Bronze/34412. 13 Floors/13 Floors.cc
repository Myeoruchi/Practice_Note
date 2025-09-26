#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n; cin >> n;
    cout << (n >= 13 ? n + 1 : n);
}