#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int n, y = 0, m = 0;
    cin >> n;
    int arr[n];
    for (int &e: arr) { cin >> e; }
    for (int &e: arr) {
        y += (e / 30 + 1) * 10;
        m += (e / 60 + 1) * 15;
    }
    if (y < m) { cout << "Y " << y; }
    else if (y > m) { cout << "M " << m; }
    else { cout << "Y M " << y; }
}