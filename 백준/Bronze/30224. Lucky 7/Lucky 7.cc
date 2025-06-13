#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    string s; cin >> s;
    cout << (s.find('7') != string::npos ? 2 : 0) + (stoi(s) % 7 ? 0 : 1);
}