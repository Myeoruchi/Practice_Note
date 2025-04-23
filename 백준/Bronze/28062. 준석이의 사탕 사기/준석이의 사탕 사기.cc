#include <iostream>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    int n, mini = 1000, sum = 0, tmp;
    cin >> n;
    while (n--) {
        cin >> tmp;
        mini = tmp % 2 ? min(mini, tmp) : mini;
        sum += tmp;
    }
    if (sum % 2) { sum -= mini; }
    cout << sum;
}