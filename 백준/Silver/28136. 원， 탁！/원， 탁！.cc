#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, first, prev, present, cnt = 0;
    cin >> n >> first;
    present = first;
    
    while (--n) {
        prev = present;
        cin >> present;
        if (prev >= present) { cnt++; }
    }
    if (present >= first) { cnt++; }
    
    cout << cnt;
}