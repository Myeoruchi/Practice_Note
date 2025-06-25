#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n, u, l;
    cin >> n >> u >> l;
    if (n >= 1000) {
        if (u >= 8000 || l >= 260) { cout << "Very Good"; }
        else { cout << "Good"; }
    }
    else { cout << "Bad"; }
}