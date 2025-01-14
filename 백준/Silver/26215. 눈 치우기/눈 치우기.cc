#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, sum = 0, maximum = 0, temp, res;
    cin >> n;
    
    while (n--) {
        cin >> temp;
        sum += temp;
        maximum = max(maximum, temp);
    }
    
    if (maximum * 2 >= sum) { res = maximum; }
    else { res = (sum + 1) / 2; }
    
    if (res > 1440) { cout << -1; }
    else { cout << res; }
}