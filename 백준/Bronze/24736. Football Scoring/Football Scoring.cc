#include <iostream>
using namespace std;

int arr[] = {6, 3, 2, 1, 2};

int main() {
    for (int i = 0; i < 2; i++) {
        int sum = 0, tmp;
        for (int j = 0; j < 5; j++) {
            cin >> tmp;
            sum += tmp * arr[j];
        }
        cout << sum << ' ';
    }
}