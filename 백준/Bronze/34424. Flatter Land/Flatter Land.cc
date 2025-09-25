#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n, x; cin >> n >> x;
    cout << (n-1) * x;
}