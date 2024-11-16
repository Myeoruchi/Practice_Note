#include <iostream>
using namespace std;

int main() {
    int a, b, cnt = 0;
    cin >> a >> a >> b;
    while (a != b) {
        cnt++;
        a = (a + 1) >> 1;
        b = (b + 1) >> 1;
    }
    cout << cnt;
}