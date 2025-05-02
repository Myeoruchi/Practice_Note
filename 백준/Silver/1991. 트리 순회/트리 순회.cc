#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

struct node { char l, r; };
node arr[100];

char print(char p, int order) {
    if (p == '.') { return ' '; }
    switch (order) {
        case 0:
            cout << p;
            print(arr[p].l, order);
            print(arr[p].r, order);
            break;
        case 1:
            print(arr[p].l, order);
            cout << p;
            print(arr[p].r, order);
            break;
        case 2:
            print(arr[p].l, order);
            print(arr[p].r, order);
            cout << p;
            break;
    }
    return '\n';
}

int main() {
    IO;
    int n;
    char a, b, c;
    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        arr[a] = {b, c};
    }
    cout << print('A', 0) << print('A', 1) << print('A', 2);
}