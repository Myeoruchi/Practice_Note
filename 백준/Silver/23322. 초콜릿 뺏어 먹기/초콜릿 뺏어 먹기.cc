#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int n, k, first, tmp, cnt = 0, sum = 0;
    cin >> n >> k >> first;
    for (int i = 1; i < n; i++) {
        cin >> tmp;
        if (tmp > first) {
            sum += tmp - first;
            cnt++;
        }
    }
    cout << sum << ' ' << cnt;
}