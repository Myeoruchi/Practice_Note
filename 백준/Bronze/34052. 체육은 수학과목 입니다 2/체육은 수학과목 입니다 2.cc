#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        int t; cin >> t;
        sum += t;
    }
    cout << (sum > 1500 ? "No" : "Yes");
}