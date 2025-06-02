#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int main() {
    IO;
    string s = "WelcomeToSMUPC";
    int n; cin >> n;
    cout << s[(n - 1) % 14];
}