#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

char arr[] = {'o', 'l', 'f'};

int main() {
    IO;
    string s;
    cin >> s;
    
    int i = 0;
    bool wrong = false;
    while (i < s.length() && !wrong) {
        int cnt = 0;
        for (; i < s.length(); i++) {
            if (s[i] == 'w') { cnt++; }
            else { break; }
        }
        if (cnt) {
            for (int idx = 0; idx < 3; idx++) {
                for (int j = 0; j < cnt; j++) {
                    if (i + j >= s.length() || s[i + j] != arr[idx]) {
                        wrong = true;
                        break;
                    }
                }
                i += cnt;
                if (wrong) { break; }
            }
        }
        else { wrong = true; }
    }
    cout << (wrong ? 0 : 1);
}