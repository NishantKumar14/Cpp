#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int key) {
    if (start >= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] > key) {
            return binarySearch(arr, start, mid - 1, key);
        }
        else
            return binarySearch(arr, start, mid + 1, key);
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    for (int tt = 0; tt < t; ++tt) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int key;
        cin >> key;
        int ans = binarySearch(arr, 0, n - 1, key);
        (ans == -1) ? cout << "Not Present " << key << endl : cout << "Present " << key << endl;
    }
    return 0;
}