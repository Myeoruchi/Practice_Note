#include <iostream>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    string a, b;
    cin >> a >> b;
    
    long long n1 = 0, n2 = 0;
    for (const auto& n: a) { n1 += n - '0'; }
    for (const auto& n: b) { n2 += n - '0'; }
    cout << n1 * n2;
}