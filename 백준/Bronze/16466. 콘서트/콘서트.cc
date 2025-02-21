#include <iostream>
using namespace std;

bool arr[1000000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    int idx;
    while (n--) {
        cin >> idx;
        arr[idx-1] = true;
    }
    
    for (int i = 0; i < 1000000; i++) {
        if (!arr[i]) { cout << i+1; break; }
    }
}