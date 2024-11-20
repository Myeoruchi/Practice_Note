#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, q;
    cin >> n >> q;
    vector<bool> v(n+1);
    
    int temp;
    while (q--) {
        cin >> temp;
        switch (temp) {
            case 1:
                cin >> temp;
                if (!v[temp]) { n--; v[temp] = true; }
                break;
            case 2:
                cin >> temp;
                if (v[temp]) { n++; v[temp] = false; }
                break;
            case 3:
                cout << n << '\n';
                break;
        }
    }
}