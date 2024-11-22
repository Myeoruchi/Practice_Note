#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    
    while (cin >> n && n) {
        vector<bool> page(n+1);
        string str;
        cin >> str;
        
        vector<string> strArr;
        stringstream ss1(str);
        unsigned long long a, b;
        char temp;
        while (getline(ss1, str, ',')) {
            if (str.find('-') != string::npos) {
                stringstream ss2(str);
                ss2 >> a >> temp >> b;
                for (; a <= b && a <= n; a++) { page[a] = true; }
            }
            else if (str.length() <= 4 && stoi(str) <= n) { page[stoi(str)] = true; }
        }
        
        cout << count(page.begin(), page.end(), true) << '\n';
    }
}