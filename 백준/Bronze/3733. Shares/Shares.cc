#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, s;
    while (cin >> n, cin >> s) {
        cout << s / (n+1) << '\n';
    }
}