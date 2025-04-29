#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    cin.tie(NULL);
	cin.sync_with_stdio(false);
	int n, m;
	unordered_map<string, int> s1;
	unordered_map<int, string> s2;
	cin >> n >> m;
	string temp;
	for (int i = 1; i <= n; i++) {
	    cin >> temp;
	    s1[temp] = i;
	    s2[i] = temp;
	}
	for (int i = 0; i < m; i++) {
	    cin >> temp;
	    if (temp[0] > '9') { cout << s1.at(temp) << '\n'; }
	    else { cout << s2.at(stoi(temp)) << '\n'; }
	}
}