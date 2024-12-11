#include <iostream>
using namespace std;

int main() {
    int n, k, p, sum = 0;
    cin >> n >> k >> p;
    
    for (; n >= 1; n--) {
        sum += n * (k + p * n);
    }
    
    cout << sum;
    return 0;
}