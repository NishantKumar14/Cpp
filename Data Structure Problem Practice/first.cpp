#include <iostream>
#include <climits>
using namespace std;

void thirdLargesstCommon(int arr[], int num){
    if (num < 3) {
        cout << "Invalid Input" << endl;
        return;
    }

    int first = arr[0];
    for (int i = 0; i < num; i++) {
        if (arr[i] > first) {
            first = arr[i];
        }
    }
    cout << "First largest Number : " << first << endl;

    int second = INT_MIN;
    for (int i = 0; i < num; i++) {
        if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }
    cout << "Second largest Number : " << second << endl;
    
    int third = INT_MIN;
    for (int i = 0; i < num; i++) {
        if (arr[i] > third && arr[i] < second) {
            third = arr[i];
        }
    }
    cout << "Third largest Number : " << third << endl;
}

int main () {
    int num;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }
    thirdLargesstCommon(arr, num);
    return 0;
}