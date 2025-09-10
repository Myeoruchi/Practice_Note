#include <iostream>
#define N 20000303
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    string s; cin >> s;
    int ans = 0;
    for (char &c: s) {
        ans = (ans * 10 + c - '0') % N;
    }
    cout << ans;
}