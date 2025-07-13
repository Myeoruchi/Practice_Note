#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n; cin >> n;
    int sum = 0, t;
    while (n--) {
        cin >> t;
        sum += t;
    }
    cout << sum;
}