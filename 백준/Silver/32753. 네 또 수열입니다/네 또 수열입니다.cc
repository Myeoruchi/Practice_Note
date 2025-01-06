#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, k;
    cin >> n >> k;
    
    if (n == 1) {
        while (k--) {
            cout << "1 ";
        }
    }
    else if (n == 2 && k == 1) {
        cout << "1 2";
    }
    else {
        cout << -1;
    }
}