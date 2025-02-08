#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    int temp;
    for (int i = 1; i <= n; i++) {
        cin >> temp;
        if (i % 2 != temp % 2) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}