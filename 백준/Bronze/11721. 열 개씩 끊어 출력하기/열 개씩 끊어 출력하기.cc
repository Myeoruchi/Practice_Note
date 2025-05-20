#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    string s; cin >> s;
    for (int i = 0; i < s.length(); i += 10) {
        cout << s.substr(i, 10) << '\n';
    }
}