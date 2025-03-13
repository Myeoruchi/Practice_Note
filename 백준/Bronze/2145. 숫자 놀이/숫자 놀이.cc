#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    while (cin >> n && n) {
        while (n >= 10) {
            int tmp = 0;
            while (n) {
                tmp += n % 10;
                n /= 10;
            }
            n = tmp;
        }
        cout << n << '\n';
    }
}