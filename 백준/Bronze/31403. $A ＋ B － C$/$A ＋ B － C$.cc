#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    cout << n1+n2-n3 << '\n' << stoi(to_string(n1) + to_string(n2))-n3;
}