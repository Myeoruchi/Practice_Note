#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, num = 0;
    cin >> a >> b;
    
    for (int i = 1; i <= b; i++) {
        string s = to_string(a * i);
        reverse(s.begin(), s.end());
        num = max(stoi(s), num);
    }
    cout << num;
}