#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    if (n == 1) {
        cin >> n;
        cout << n * 2;
        return 0;
    }
    
    long long num, temp;
    cin >> num >> temp;
    num = (num << 1) * (temp << 1) / __gcd(num << 1, temp << 1);
    while (n-- > 2) {
        cin >> temp;
        num = num * (temp << 1) / __gcd(num, temp << 1);
    }
    
    cout << num;
}