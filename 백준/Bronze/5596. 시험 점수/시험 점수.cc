#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int sum = 0;
    for (int i = 0; i < 2; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        sum = max(sum, a + b + c + d);
    }
    cout << sum;
}