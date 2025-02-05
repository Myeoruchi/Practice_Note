#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, sum = 0, pos = 0;
    for (int i = 0; i < 5; i++) {
        cin >> a >> b >> c >> d;
        if (a + b + c + d > sum) {
            pos = i + 1;
            sum = a + b + c + d;
        }
    }
    cout << pos << ' ' << sum;
}