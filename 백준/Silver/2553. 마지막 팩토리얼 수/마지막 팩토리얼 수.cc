#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    unsigned long long num = 1;
    for (int i = 2; i <= n; i++) {
        num *= i;
        while (num % 10 == 0) {
            num /= 10;
        }
        num %= 1000000;
    }
    cout << num % 10;
    return 0;
}