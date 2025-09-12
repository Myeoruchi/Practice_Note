#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int a, b, c, d; cin >> a >> b >> c >> d;
    cout << (a + c < b + d ? "Hanyang Univ." : (a + c > b + d ? "Yongdap" : "Either"));
}