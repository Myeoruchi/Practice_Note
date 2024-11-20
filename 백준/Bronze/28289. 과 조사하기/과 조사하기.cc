#include <iostream>
using namespace std;

int arr[4];

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp > 1) {
            cin >> temp;
            switch (temp) {
                case 1:
                case 2: arr[0]++; break;
                case 3: arr[1]++; break;
                case 4: arr[2]++; break;
            }
        }
        else { arr[3]++; cin >> temp; }
        cin >> temp;
    }
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << '\n';
    }
}