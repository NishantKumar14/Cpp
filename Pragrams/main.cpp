#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int arr[n];
    cout << "Enter the element of array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int comparision = 0, operation = 0;
    
    // for (int i = 0; i < n; ++i) {
    //     int key = arr[i];
    //     int j = i - 1;
    //     while (j >= 0) {
    //         comparision++;
    //         if (arr[j] > key) {
    //             arr[j + 1] = arr[j];
    //             operation++;
    //             j--;
    //         }
    //         else
    //             break;
    //     }
    //     if (i != j + 1) {
    //         arr[j + 1] = key;
    //         comparision++;
    //     }
    // }
    for (int i = 0; i < n - 1; ++i) {
        comparision++;
        for (int j = i + 1; j < n; ++j) {
            operation++;
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "The sorted array is : " ;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout  << endl << "Number of Comparision: " << comparision << endl << "Number of operation: " << operation << endl;
    return 0;
}  