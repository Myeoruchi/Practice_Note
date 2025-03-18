#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    long long n, a, b;
    while (t--) {
        cin >> n >> a >> b;
        cout << (bitset<64> (a | b).count()) << '\n';
    }
}