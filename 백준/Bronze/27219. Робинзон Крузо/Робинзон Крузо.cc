#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n; cin >> n;
    int V = n / 5, I = n % 5;
    for (int i = 0; i < V; i++) { cout << 'V'; }
    for (int i = 0; i < I; i++) { cout << 'I'; }
}