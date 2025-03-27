#include <iostream>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)
bool bf[1001];

int main() {
    FAST_IO;
    int n, m, tmp;
    cin >> n >> m;
    int wait[n];
    for (int i = 0; i < n; i++) {
        cin >> wait[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        bf[tmp] = true;
    }
    
    tmp = m;
    for (int i = 0; i < m; i++) {
       if (bf[wait[i]]) { tmp--; }
    }
    cout << tmp;
}