#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n; cin >> n;
    while (n--) {
        string s; cin >> s;
        for (char &c: s) { cout << (char)tolower(c); }
        cout << '\n';
    }
}