#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] > arr [i + 1]) {
            
        }
    }
}

void selectionSort (int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        int minValue = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minValue]) {
                minValue = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minValue];
        arr[minValue] = temp;
    }
}

void solve() {
    int n;
    cout << "Enter the size of an Array : " ;
    cin >> n;
    int arr[n];
    cout << "Enter the element of Array : " << " ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    selectionSort(arr, n);
    BubbleSort(arr, n);
    cout << "Sorted Array : ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main () {
    int t;
    cout << "Enter the test Cases : ";
    cin >> t;
    for (int tt = 0; tt < t; ++tt) {
        solve();   
    }   
    return 0;
}