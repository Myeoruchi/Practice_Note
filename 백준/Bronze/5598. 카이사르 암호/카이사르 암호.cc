#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string str;
    cin >> str;
    
    for (int i = 0; i < str.length(); i++) {
        str[i] = (str[i] - 'A' + 23) % 26 + 'A'; 
    }
    
    cout << str;
}