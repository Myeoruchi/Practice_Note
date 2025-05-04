#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    long long n;
    cin >> n;
    cout << (n % 5 == 0 || n % 5 == 2 ? "CY" : "SK");
}