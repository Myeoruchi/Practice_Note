#include <iostream>
using namespace std;
using ll = long long;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    ll n;
    cin >> n;
    cout << (n % 7 == 2 || n % 7 == 0 ? "CY" : "SK");
}