#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    string num;
    while (n--) {
        int sum = 0;
        cin >> num;
        for (int i = 15; i >= 0; i--) {
            if (i % 2 == 0) {
                int temp = (num[i] - '0') * 2;
                sum += temp / 10 + temp % 10;
            }
            else { sum += num[i] - '0'; }
        }
        if (sum % 10) { cout << "F\n"; }
        else { cout << "T\n"; }
    }
}