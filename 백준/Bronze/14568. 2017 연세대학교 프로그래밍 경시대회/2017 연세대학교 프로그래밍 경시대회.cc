#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int sum = 0;
    if (n >= 6) {
        sum = (((n - 4) / 2) * ((n - 4) / 2 + 1)) / 2;
    }
    cout << sum;
    return 0;
}