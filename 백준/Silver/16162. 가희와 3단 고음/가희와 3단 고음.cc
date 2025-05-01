#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int n, a, d, tmp, cnt = 0;
    cin >> n >> a >> d;
    while (n--) {
        cin >> tmp;
        if (tmp == a) { a += d; cnt++; }
    }
    cout << cnt;
}