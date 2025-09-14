#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n; cin >> n;
    int prev = 0;
    bool up = true;
    while (n--) {
        int t; cin >> t;
        if (up && prev >= t) {
            up = false;
        }
        else if (!up && prev <= t) {
            cout << "NO";
            exit(0);
        }
        prev = t;
    }
    cout << "YES";
}