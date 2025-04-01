#include <iostream>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    int team, player, remaining, my;
    cin >> team >> player >> remaining >> my;
    int lowest = (remaining - my) >= team - 1 ? team : remaining - my + 1;
    int highest = (remaining - my + player - 1) / player + 1;
    cout << lowest << ' ' << highest;
}