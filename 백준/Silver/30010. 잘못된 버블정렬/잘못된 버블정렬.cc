#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string s;
    while (n-- > 3) {
        s += "0 ";
    }
    s += "3 1 2";
    cout << s;
}