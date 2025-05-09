#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int n;
    cin >> n;
    string s, ans;
    while (n--) {
        cin >> s;
        if (s == "Algorithm") { ans = "204"; }
        else if (s == "DataAnalysis") { ans = "207"; }
        else if (s == "ArtificialIntelligence") { ans = "302"; }
        else if (s == "CyberSecurity") { ans = "B101"; }
        else if (s == "Network") { ans = "303"; }
        else if (s == "Startup") { ans = "501"; }
        else { ans = "105"; }
        cout << ans << '\n';
    }
}