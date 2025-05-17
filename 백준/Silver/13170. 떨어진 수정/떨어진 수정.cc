#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int n, k, p, w;
    cin >> n >> k >> p >> w;
    cout << (p + w - 1) / w;
}