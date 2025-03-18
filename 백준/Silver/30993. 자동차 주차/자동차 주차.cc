#include <iostream>
using namespace std;

int main() {
    long long n, tmp, mul = 1, div = 1;
    cin >> n;
    
    for (int i = 0; i < 2; i++) {
        cin >> tmp;
        while (tmp) {
            mul *= n;
            div *= tmp;
            n--; tmp--;
        }
    }
    cout << mul / div;
}