#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n;
    for (int i = 0; i < 8; i++) {
        cin >> n;
        if (n == 9) {
            cout << "F";
            return 0;
        }
    }
    cout << "S";
}