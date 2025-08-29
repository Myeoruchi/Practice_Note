#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    string s;;
    while (1) {
        getline(cin, s);
        if (s == "#") { break; }
        int sum = 0;
        for (char &c: s) {
            switch (tolower(c)) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    sum++;
                    break;
            }
        }
        cout << sum << '\n';
    }
}