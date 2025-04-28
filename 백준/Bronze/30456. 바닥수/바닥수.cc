#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    int n, l;
    cin >> n >> l;
    string ans(l - 1, '1');
    cout << ans << n;
}