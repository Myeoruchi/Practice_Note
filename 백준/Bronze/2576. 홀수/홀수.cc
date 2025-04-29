#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int sum = 0, mini = 100, tmp;
    for (int i = 0; i < 7; i++) {
        cin >> tmp;
        if (tmp % 2) {
            sum += tmp;
            mini = min(mini, tmp);
        }
    }
    if (sum) { cout << sum << '\n' << mini; }
    else { cout << -1; }
}