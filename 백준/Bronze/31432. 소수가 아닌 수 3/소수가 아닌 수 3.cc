#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    int n;
    cin >> n >> n;
    cout << "YES\n" << (n > 0 ? n * 111 : 0);
}