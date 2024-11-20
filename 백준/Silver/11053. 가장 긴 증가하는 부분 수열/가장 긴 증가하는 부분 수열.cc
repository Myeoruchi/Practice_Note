#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000];
int len[1000];

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j]) {
                len[i] = max(len[i], len[j]+1);
            }
        }
    }
    cout << *max_element(len, len+n)+1;
}