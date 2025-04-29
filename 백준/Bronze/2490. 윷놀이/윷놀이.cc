#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    for (int i = 0; i < 3; i++) {
        int cnt = 0, tmp;
        for (int j = 0; j < 4; j++) {
            cin >> tmp;
            if (tmp == 0) { cnt++; }
        }
        if (cnt) { cout << char(cnt + 'A' - 1) << '\n'; }
        else { cout << "E\n"; }
    }
}