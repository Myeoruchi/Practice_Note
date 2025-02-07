#include <iostream>
using namespace std;

int main() {
    string p, q = "1";
    cin >> p;
    
    int pos = 2;
    for (int i = 0; i < p.length() - 2; i++) {
        if (pos == i+2 && p[i+2] == '0') { pos++; }
        q += "0";
    }
    p.erase(0, pos);
    cout << "YES\n" << p << ' ' << q;
}