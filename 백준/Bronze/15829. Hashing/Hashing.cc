#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int M = 1234567891, n;
    string str;
    cin >> n >> str;
    unsigned long long hash = 0, r = 1;
    for (int i = 0; i < n; i++) {
        int c = str[i] - 'a' + 1;
        hash = (hash + c * r) % M;
        r = ((r << 5) - r) % M;
    }
    cout << hash;
}