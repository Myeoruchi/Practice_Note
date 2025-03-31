#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s == "SONGDO") { s = "HIGHSCHOOL"; }
    else if (s == "CODE") { s = "MASTER"; }
    else if (s == "2023") { s = "0611"; }
    else { s = "CONTEST"; }
    cout << s;
}