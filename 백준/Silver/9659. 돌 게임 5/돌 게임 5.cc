#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    long long n; cin >> n;
    cout << (n % 2 ? "SK" : "CY");
}