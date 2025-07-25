#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n; cin >> n;
    cout << (n / 10 == n % 10 ? 1 : 0);
}