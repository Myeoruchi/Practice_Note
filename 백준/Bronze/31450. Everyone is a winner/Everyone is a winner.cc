#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int m, k; cin >> m >> k;
    cout << (m % k ? "No" : "Yes");
}