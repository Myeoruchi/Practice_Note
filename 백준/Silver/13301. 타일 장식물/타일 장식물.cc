#include <iostream>
using namespace std;
using ll = long long;

#define IO cin.tie(0)->sync_with_stdio(0)

ll fibo[81];

int main() {
    IO;
    int n; cin >> n;
    ll sum = 4;
    fibo[1] = 1;
    for (int i = 2; i <= n; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
        sum += fibo[i] * 2;
    }
    cout << sum;
}