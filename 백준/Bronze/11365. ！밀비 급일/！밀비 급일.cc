#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    while (getline(cin, str) && str != "END") {
        reverse(str.begin(), str.end());
        cout << str << '\n';
    }
    return 0;
}