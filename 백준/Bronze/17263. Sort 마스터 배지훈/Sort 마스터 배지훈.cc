#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, temp, max = 0;
    cin >> n;
    
    while (n--) {
        cin >> temp;
        max = max > temp ? max : temp; 
    }
    
    cout << max;
    return 0;
}