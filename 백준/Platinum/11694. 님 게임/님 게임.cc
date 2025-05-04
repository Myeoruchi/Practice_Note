#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int n, ans = 0, tmp, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        ans ^= tmp;
        cnt += tmp == 1 ? 1 : 0;
    }
    if (n == cnt) { cout << (n % 2 ? "cubelover" : "koosaga"); }
    else { cout << (ans ? "koosaga" : "cubelover"); }
}