#include <iostream>
using namespace std;

int main() {
    string p, q = "1";
    cin >> p;
    p.erase(0, 2);
    for (int i = 0; i < p.length(); i++) {
        q += "0";
    }
    cout << "YES\n" << p << ' ' << q;
}