#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int arr[5];

int main() {
    IO;
    string s; cin >> s;
    for (char &c: s) {
        switch (c) {
            case '2': arr[0]++; break;
            case '0': arr[1]++; break;
            case '1': arr[2]++; break;
            case '8': arr[3]++; break;
            default: arr[4]++; break;
        }
    }
    
    if (arr[4]) { cout << 0; }
    else if (arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[3]) { cout << 8; }
    else if (arr[0] && arr[1] && arr[2] && arr[3]) { cout << 2; }
    else { cout << 1; }
}