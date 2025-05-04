#include <iostream>
#include <vector>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int n, ans = 0, tmp;
    cin >> n;
    while (n--) {
        cin >> tmp;
        ans ^= tmp;
    }
    cout << (ans ? "koosaga" : "cubelover");
}