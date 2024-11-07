#include <iostream>
using namespace std;

int k, attempt;

void merge(int arr[], int start, int mid, int end) {
    int i = start, j = mid+1, idx = 0;
    int tmp[end+1];
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) { tmp[idx++] = arr[i++]; }
        else { tmp[idx++] = arr[j++]; }
    }
    while (i <= mid) { tmp[idx++] = arr[i++]; }
    while (j <= end) { tmp[idx++] = arr[j++]; }
    idx = 0;
    while (start <= end) {
        if (++attempt == k) { cout << tmp[idx]; exit(0); }
        arr[start++] = tmp[idx++];
    }
}

void merge_sort(int arr[], int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
}

int main() {
    cin.sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    merge_sort(arr, 0, n-1);
    cout << -1;
}