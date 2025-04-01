#include <iostream>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    string a, b;
    cin >> a >> b;
    if (a == "0" || b == "0") { cout << 0; return 0; }
    
    long long ans = 0;
    for (const auto& n1: a) {
        for (const auto& n2: b) {
            ans += (n1 - '0') * (n2 - '0');
        }
    }
    cout << ans;
}