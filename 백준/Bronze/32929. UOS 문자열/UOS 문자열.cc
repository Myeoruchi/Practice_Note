#include <iostream>
using namespace std;

int main() {
    string str = "UOS";
    int n;
    cin >> n;
    cout << str[(n-1) % 3];
}