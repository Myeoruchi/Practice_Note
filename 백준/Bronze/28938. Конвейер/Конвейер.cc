#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n; cin >> n;
    int sum = 0;
    while (n--) {
        int t; cin >> t;
        sum += t;
    }
    cout << (sum ? (sum > 0 ? "Right" : "Left") : "Stay");
}