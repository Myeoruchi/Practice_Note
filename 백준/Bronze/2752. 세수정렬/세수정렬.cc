#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IO;
    int arr[3];
    for (int &e: arr) { cin >> e; }
    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 3; j++) {
            if (arr[i] > arr[j]) { swap(arr[i], arr[j]); }
        }
    }
    for (int &e: arr) { cout << e << ' '; }
}