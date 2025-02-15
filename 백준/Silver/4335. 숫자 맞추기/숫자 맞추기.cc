#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, lower = 0, upper = 11, lie = 0;
    string ans;
    while (cin >> n && n) {
        cin.ignore();
        getline(cin, ans);
        if (upper - lower <= 1 && lie == 0) { lie = 1; }
        if (ans == "right on") {
            if (lie || n >= upper || n <= lower) { cout << "Stan is dishonest\n"; }
            else { cout << "Stan may be honest\n"; }
            lower = 0, upper = 11, lie = 0;
        }
        else if (ans == "too high" && n < upper) { upper = n; }
        else if (ans == "too low" && lower < n) { lower = n; }
    }
}