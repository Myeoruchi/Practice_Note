#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int sum = 0, num = 0;
    while (cin >> num) {
        sum += num;
    }
    cout << sum;
}