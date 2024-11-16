#include <iostream>
using namespace std;

int main(void) {
    string str;
    cin >> str;
    int ans = 0, cnt = 0;
    for (int i = 1; str[i]; i++) {
        if (str[i] == str[i-1]+1) { cnt++; }
        else {
            if (cnt == 2) { ans++; }
            cnt = 0;
        }
    }
    if (cnt == 2) { ans++; }
    cout << ans;
}