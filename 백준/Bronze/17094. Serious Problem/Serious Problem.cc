#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    string s;
    cin >> n >> s;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == '2') { cnt++; }
        else { cnt--; }
    }
    
    if (cnt > 0) { cout << 2; }
    else if (cnt) { cout << 'e'; }
    else { cout << "yee"; }
}