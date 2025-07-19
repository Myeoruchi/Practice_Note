#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    int n; cin >> n;
    switch (n) {
        case 1:
            cout << "11\nA B C D E F G H J L M";
            break;
        case 2:
            cout << "9\nA C E F G H I L M";
            break;
        case 3:
            cout << "9\nA C E F G H I L M";
            break;
        case 4:
            cout << "9\nA B C E F G H L M";
            break;
        case 5:
            cout << "8\nA C E F G H L M";
            break;
        case 6:
            cout << "8\nA C E F G H L M";
            break;
        case 7:
            cout << "8\nA C E F G H L M";
            break;
        case 8:
            cout << "8\nA C E F G H L M";
            break;
        case 9:
            cout << "8\nA C E F G H L M";
            break;
        case 10:
            cout << "8\nA B C F G H L M";
            break;
    }
}